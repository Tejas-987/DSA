class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        vector<string> ans;

        for (char ch = 'a'; ch <= 'z'; ch++) {
            int minc = INT_MAX;

            for (string word : words) {
                int c = 0;
                for (char f : word) {
                    if (ch == f) {
                        c++;
                    }
                }
                minc = min(minc, c);
            }

            for (int i = 0; i < minc; i++) {
                ans.push_back(string(1, ch));
            }
        }

        return ans;
    }
};
