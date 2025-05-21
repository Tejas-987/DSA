class Solution {
public:
    string frequencySort(string s) {
        // Step 1: Frequency map
        map<char, int> mp;
        for (int i = 0; i < s.size(); i++) {
            mp[s[i]]++;
        }

        // Step 2: Max heap (priority queue) based on frequency
        priority_queue<pair<int, char>> pq;
        for (map<char, int>::iterator it = mp.begin(); it != mp.end(); it++) {
            pq.push(make_pair(it->second, it->first)); // frequency, character
        }

        // Step 3: Build result using basic loops
        string result = "";
        while (!pq.empty()) {
            pair<int, char> p = pq.top();
            pq.pop();

            int freq = p.first;
            char ch = p.second;

            for (int i = 0; i < freq; i++) {
                result += ch;
            }
        }

        return result;
    }
};
