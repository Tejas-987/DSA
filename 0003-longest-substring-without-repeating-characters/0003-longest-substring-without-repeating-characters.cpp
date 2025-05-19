#include <string>
#include <map>
using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        map<char, int> lastIndex; // Initialize a map to store the last index of each character
        int longest = 0, start = -1; // Initialize variables for tracking the length of the longest substring and the start index of the current substring
        
        for (int i = 0; i < s.size(); ++i) {
            if (lastIndex.find(s[i]) != lastIndex.end() && lastIndex[s[i]] > start) {
                start = lastIndex[s[i]]; // Update the start index if the character is repeated
            }
            longest = max(longest, i - start); // Update the length of the longest substring
            lastIndex[s[i]] = i; // Update the last index of the current character
        }
        
        return longest;
    }
};
