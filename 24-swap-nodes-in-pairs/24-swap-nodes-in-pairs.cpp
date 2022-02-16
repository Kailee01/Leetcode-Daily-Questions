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
    ListNode* swapPairs(ListNode* head) {
        if(head==NULL||head->next==NULL) return head;
        ListNode* first=head;
        // cout<<first->val;
        ListNode* second=head->next;
             while(first!=NULL&&second!=NULL)     
                 {
               swap(first->val,second->val);
                 
                 if(first->next->next==NULL||second->next->next==NULL) return head;
                 first=first->next->next;
                 second=second->next->next;
             }                    
        second->next=NULL;
        
        return head;
    }
};