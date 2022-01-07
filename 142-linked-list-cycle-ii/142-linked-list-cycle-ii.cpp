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
    ListNode *detectCycle(ListNode *A) {
    ListNode* slow=A;
    ListNode* fast=A;
    ListNode* entery_point;
    if(A==NULL||A->next==NULL) return NULL;
        
    
    do{
        if(fast==NULL||fast->next==NULL) return NULL;
        slow=slow->next;
        fast=fast->next->next;
        
    }while(slow!=fast);
    slow=A;
    while(slow!=fast){
        slow=slow->next;
        fast=fast->next;
    }
    entery_point=slow;
        return slow;
    }
};