/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        if (!head || !head->next) return NULL; // handle edge cases

        ListNode *slow = head;
        ListNode *fast = head;

        // First phase: determine whether a cycle exists
        while (fast && fast->next) {
            slow = slow->next;
            fast = fast->next->next;
            if (slow == fast) { // cycle detected
                break;
            }
        }

        // If no cycle was detected, return NULL
        if (!fast || !fast->next) {
            return NULL;
        }

        // Second phase: find the entry point of the cycle
        slow = head;
        while (slow != fast) {
            slow = slow->next;
            fast = fast->next;
        }

        return slow; // the entry point of the cycle
    }
};
