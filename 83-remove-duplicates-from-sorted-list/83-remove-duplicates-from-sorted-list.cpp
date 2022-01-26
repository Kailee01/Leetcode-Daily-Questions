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
    
    
//   Recursive Solution:
//         if(head == null || head.next == null)return head;
//         head.next = deleteDuplicates(head.next);
//         return head.val == head.next.val ? head.next : head;
    
    
    
    
    
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==NULL)return head;
          if(head->next==NULL)return head;
    ListNode* cur=head->next,*prev=head;
        ListNode* uniqueHead=prev;
        while(cur){
            
            while(cur&&prev->val==cur->val){
                cur=cur->next;
            }
            prev->next=cur;
            if(cur==NULL)break;
            cur=cur->next;
            prev=prev->next;
        }
        return uniqueHead;
        
    }
};