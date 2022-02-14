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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
ListNode* dummy= new ListNode(-1);
        dummy->next=head;
        ListNode* slow=dummy;
        ListNode* fast=dummy;
        while(n--)fast=fast->next;
      
        
        
        ListNode* last=slow;
        while(fast!=NULL)fast=fast->next,last=slow,slow=slow->next;
 
        last->next=slow->next;
        delete slow;
        return dummy->next;
        
    }
};