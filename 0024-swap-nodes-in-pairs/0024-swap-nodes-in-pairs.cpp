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
    ListNode* fun(ListNode* head){
        if(!head || !(head->next)) return head;
        ListNode* A= head;
        ListNode* B=head->next;
        A->next= fun(B->next);
        B->next=A;
        return B;
    }
    
    ListNode* swapPairs(ListNode* head) {
        if(head==NULL || head->next==NULL) return head;
       return fun(head);
        
    }
};