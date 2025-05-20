class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char, int> freq;

        for (char c : s) {
            freq[c]++;
        }

        int count = 0;
        bool hasOddFreq = false;

        for ( auto& pair : freq) {
            count += pair.second / 2 * 2;
            if (pair.second % 2 != 0) {
                hasOddFreq = true;
            }
        }

        return hasOddFreq ? count + 1 : count;
    }
};