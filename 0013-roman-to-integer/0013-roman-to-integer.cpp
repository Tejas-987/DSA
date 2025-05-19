#include <unordered_map>
#include <string>

using namespace std;

class Solution {
public:
    int romanToInt(string s) {
        // Arrays for Roman numerals and their corresponding integer values
        char roman[] = {'I', 'V', 'X', 'L', 'C', 'D', 'M'};
        int value[] = {1, 5, 10, 50, 100, 500, 1000};

        int ans = 0;

        for (int i = 0; i < s.length(); i++) {
            int current = getValue(s[i], roman, value);
            int next = (i < s.length() - 1) ? getValue(s[i + 1], roman, value) : 0;
            
            if (current < next) {
                ans -= current;
            } else {
                ans += current;
            }
        }
        return ans;
    }

private:
    // Helper function to get the integer value of a Roman numeral
    int getValue(char c, char roman[], int value[]) {
        for (int i = 0; i < 7; i++) {
            if (roman[i] == c) {
                return value[i];
            }
        }
        return 0; // If the character is not a valid Roman numeral
    }
};
