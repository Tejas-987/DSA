class Solution {
public:
    vector<int> findSubstring(string s, vector<string>& words) {
        vector<int> v;
        int wl = words[0].size();
        int w = words.size();
        int tl = wl * w;
        int n = s.size();
        if (n < tl || n == 0 || tl == 0) return v; 
        unordered_map<string, int> mp;
        for (const auto& word : words) {
            mp[word]++;
        } 
        for(int i = 0; i < wl; ++i){
            unordered_map<string, int> seen;
            int count = 0;
            int left = i; 
            for(int j = i; j <= n - wl; j += wl){
                string word = s.substr(j, wl); 
                if(mp.find(word) != mp.end()){
                    seen[word]++;
                    count++; 
                    while(seen[word] > mp[word]){
                        string leftWord = s.substr(left, wl);
                        seen[leftWord]--;
                        count--;
                        left += wl;
                    } 
                    if(count == w){
                        v.push_back(left);
                    }
                }else{
                    seen.clear();
                    count = 0;
                    left = j + wl;
                }
            }
        } 
        return v;
    }
};