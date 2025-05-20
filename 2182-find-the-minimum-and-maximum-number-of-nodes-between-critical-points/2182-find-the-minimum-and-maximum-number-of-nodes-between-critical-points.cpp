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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
      vector<int> criticalpt;
      ListNode* prev = nullptr;
        ListNode* curr = head;
        int position = 0;
        while(curr!=nullptr  && curr->next!=nullptr){
            if(prev!=nullptr && curr->next!=nullptr){
                if((curr->val >prev->val && curr->val >curr->next->val)|| (curr->val < prev->val && curr->val < curr->next->val)){
                    criticalpt.push_back(position);

                }
            }
            prev=curr;
            curr=curr->next;
            position++;
        }
        if(criticalpt.size()<2){
            return {-1,-1};
        }
         int minDistance = INT_MAX;
        int maxDistance = criticalpt.back() - criticalpt.front();
        
        for (int i = 1; i < criticalpt.size(); i++) {
            minDistance = min(minDistance, criticalpt[i] - criticalpt[i - 1]);
        }
        
        return {minDistance, maxDistance};
    }
};