/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if (!head || left == right) return head; // Edge case

        ListNode* dummy = new ListNode(0); // Dummy node to handle edge cases
        dummy->next = head;
        ListNode* prev = dummy;

        // Move `prev` to the node before `left`
        for (int i = 1; i < left; i++) {
            prev = prev->next;
        }

        ListNode* curr = prev->next; // Start of the reversal
        ListNode* temp;

        // Reverse nodes between left and right
        for (int i = 0; i < right - left; i++) {
            temp = curr->next;           // Store next node
            curr->next = temp->next;     // Remove temp from the sublist
            temp->next = prev->next;     // Insert temp at the front
            prev->next = temp;           // Move prev pointer forward
        }

        return dummy->next;
    }
};
