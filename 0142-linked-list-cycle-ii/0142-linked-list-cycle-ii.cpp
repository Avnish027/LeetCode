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
    ListNode* detect_loop(ListNode* head){
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast) return slow;
        }
        return NULL;
    }
    
    ListNode *detectCycle(ListNode *head) {
        ListNode*fast= detect_loop(head);
        if(fast!=NULL){
            ListNode* slow=head;
            int index=0; 
            while(slow!=fast){
                slow=slow->next;
                fast=fast->next;
                index++;
            }
            return slow;
        }
        else return NULL;
    }
};