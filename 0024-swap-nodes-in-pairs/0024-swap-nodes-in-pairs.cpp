class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        // Base case: If there are less than 2 nodes, return head
        if (!head || !head->next) return head;

        // Nodes to be swapped
        ListNode* first = head;
        ListNode* second = head->next;

        // Recursive call to swap the rest of the list
        first->next = swapPairs(second->next);

        // Swap first and second
        second->next = first;

        // Return new head (second node)
        return second;
    }
};
