/*****
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
  ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* tmp=new ListNode(-2);
        int cary=0;
        ListNode* head=tmp;
        while(l1!=NULL||l2!=NULL){
            int data1=l1==NULL?0:l1->val;
            int data2=l2==NULL?0:l2->val;
            int sum=data1+data2+cary;
            cary=sum/10;
        head->next=new ListNode(sum%10);
            head=head->next;
            if(l1!=NULL)
            l1=l1->next;
            if(l2!=NULL)
            l2=l2->next;
        }
        if(cary!=0) head->next=new ListNode(cary);

        // return head;
        return tmp->next;
    }
};