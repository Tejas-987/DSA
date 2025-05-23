class Solution {
public:
    int maximumLengthSubstring(string s) {
        int n = s.size();
        int ans = INT_MIN;
        
        for(int i=0;i<n;i++){
            unordered_map<char, int>mp2;
            for(int j=i;j<n;j++){
                mp2[s[j]]++;
                if(mp2[s[j]]>2){
                    break;
                }
                int length = j-i+1;
                ans = max(ans, length);
            }
        }
        return ans;
    }
};