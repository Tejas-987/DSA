class Solution {
public:
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode* curr = head;
        ListNode* first = nullptr;
        ListNode* second = nullptr;

        int len = 0;
        while (curr) {
            len++;
            if (len == k) first = curr; // Save the kth node
            curr = curr->next;
        }

        curr = head;
        for (int i = 0; i < len - k; i++) { // Iterate to (len - k)th node from the beginning
            curr = curr->next;
        }
        second = curr; // Save the (len - k)th node

        // Swap the values of the nodes
        int temp = first->val;
        first->val = second->val;
        second->val = temp;

        return head;
    }
};
