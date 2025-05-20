
class Solution {  
public:  
    ListNode* reverseKGroup(ListNode* head, int k) {  
        if (head == NULL || k == 1) return head;  

        // Create a dummy node to handle the edge cases  
        ListNode *dumpy = new ListNode(0);  
        dumpy->next = head;  
        ListNode *pre = dumpy;  
        ListNode *cur, *nex;  

        int count = 0;  
        // Count the total number of nodes in the list  
        while (head) {  
            count++;  
            head = head->next;  
        }  

        // Continue reversing in groups of k  
        while (count >= k) {  
            cur = pre->next; // The first node of the group  
            nex = cur->next; // The second node  

            for (int i = 1; i < k; i++) {  
                cur->next = nex->next; // Point current to the next of next  
                nex->next = pre->next;  // Insert nex node at the beginning of the sub-list  
                pre->next = nex;        // Move the previous node to point to nex  
                nex = cur->next;       // Move to the next node to be processed  
            }  
            pre = cur; // Move the pre pointer k nodes ahead  
            count -= k; // Decrease the count by k  
        }  

        return dumpy->next; // Return the new head  
    }  
};