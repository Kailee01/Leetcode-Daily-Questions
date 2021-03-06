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
    bool hasCycle(ListNode *head) {
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast&&fast->next!=NULL){
            fast=fast->next->next;
            slow=slow->next;
            if(slow==fast) return 1;
        }
        return 0;
        
        unordered_set<ListNode*>st;
        ListNode* cur=head;
        while(cur!=NULL){
            if(st.count(cur)) return 1;
            st.insert(cur);
            cur=cur->next;
        }
        return 0;
        
    }
};