#include <string>
#include <algorithm> // Include algorithm header for reverse function
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) {
            return false;
        } else {
            string y = to_string(x);
            string w = y; // Create a copy of y to store the reversed string
            reverse(w.begin(), w.end()); // Reverse the copy of y

            // Compare the original string y with the reversed string w
            if (w != y) {
                return false;
            }
        }
        return true;
    }
};
