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
    ListNode* mergeNodes(ListNode* head) {
        ListNode* curNew=head,*curOld=head;
        curOld=curOld->next;
         while(curOld){
            int sum=0;
            while(curOld&&curOld->val!=0){
                sum+=curOld->val;
                curOld=curOld->next;
            }
            curNew->val=sum;
            curOld=curOld->next;
            if(curOld!=NULL){
                curNew=curNew->next;                
            }
        }
        curNew->next=NULL;
        return head;
        
        
        
        
        ListNode* cur,*head1=new ListNode(-1);
        cur=head1;
        head=head->next;
        while(head){
            int sum=0;
            while(head&&head->val!=0){
                sum+=head->val;
                head=head->next;
            }
            cur->next=new ListNode(sum);
            cur=cur->next;
            head=head->next;
        }
        return head1->next;
    }
};