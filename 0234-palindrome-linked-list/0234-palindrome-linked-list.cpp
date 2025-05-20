class Solution {
public:
    bool isPalindrome(ListNode* head) {
        vector<int> values;
        
        // Store the values of the linked list in a vector
        ListNode* p = head;
        while (p != nullptr) {
            values.push_back(p->val);
            p = p->next;
        }
        
        // Use two pointers to check if the values form a palindrome
        int left = 0, right = values.size() - 1;
        while (left < right) {
            if (values[left] != values[right]) {
                return false; // If values are not equal, it's not a palindrome
            }
            left++;
            right--;
        }
        
        return true; // If all values are equal, it's a palindrome
    }
};