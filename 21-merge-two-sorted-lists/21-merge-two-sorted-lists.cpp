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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
    ListNode* head1=new ListNode(-22);
    ListNode* head=new ListNode(0);
    head1->next=head;
    ListNode* p1=l1;
    ListNode* p2=l2;
    while(p1!=NULL&&p2!=NULL){
        if(p1->val>p2->val)head->next=new ListNode(p2->val),p2=p2->next;
        else head->next=new ListNode(p1->val),p1=p1->next;
        head=head->next;
        
    }
    
    while(p1!=NULL){
        head->next=new ListNode(p1->val);
        p1=p1->next;
        head=head->next;
    }
    
    while(p2!=NULL){
        head->next=new ListNode(p2->val);
        p2=p2->next;
        head=head->next;
    }
    head->next=NULL;
    
    return head1->next->next;
}
};