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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head== NULL)return NULL;
        int count=0;
        ListNode* temp= head;
        while(temp){
            count++;
            temp=temp->next;
        }
        int rotate= k%count;
        if(rotate==0) return head;
        int jumps=count-rotate-1;
        temp=head;
        while(jumps--){
            temp=temp->next;

        }
        ListNode* second=temp->next;
        ListNode* z= second;
        temp->next=NULL;
        while(second->next){
            second=second->next;
        }
        second->next=head;
        head=z;
        return head;
        
    }
};