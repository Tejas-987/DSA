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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if (!headA || !headB) return nullptr;

        ListNode *a = headA;
        ListNode *b = headB;

        // Traverse both lists. When one pointer reaches the end, switch it to the other list's head.
        // This way, the two pointers will eventually be aligned at the intersection point.
        while (a != b) {
            a = (a == nullptr) ? headB : a->next;
            b = (b == nullptr) ? headA : b->next;
        }

        return a; // Either the intersection node or nullptr if no intersection exists
    }
};
