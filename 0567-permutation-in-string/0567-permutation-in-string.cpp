#include <algorithm> // for std::sort
#include <string>
using namespace std;

class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int y = s1.size();
        if(y>s2.size()) return false;
        sort(s1.begin(), s1.end()); // Sort s1

        for (int i = 0; i <= s2.size() - y; i++) {
            string sub = s2.substr(i, y); // Extract a substring of length y from s2
            sort(sub.begin(), sub.end()); // Sort the substring

            if (s1 == sub) { // Check if the sorted substring is equal to sorted s1
                return true; // If they are equal, s1 is a permutation of this substring
            }
        }
        return false; // If no permutation is found, return false
    }
};
