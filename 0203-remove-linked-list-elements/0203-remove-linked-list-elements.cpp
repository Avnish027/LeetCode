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
    void fun(ListNode* prev, ListNode* curr, int val){
        if(curr==NULL) return;
        if(curr->val==val){
            prev->next=curr->next;
            delete curr;
            fun(prev,prev->next,val);
        }
        else{
            fun(curr,curr->next,val);
        }
    }
    
    
    ListNode* removeElements(ListNode* head, int val) {
                if(head==NULL) return head;

      while(head!=NULL && head->val==val)  {
        ListNode* temp=head;
          head=head->next;
          delete temp;
      }
                if(head==NULL || head->next==NULL) return head;

        fun(head,head->next,val);
        return head;
    }
};