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
    ListNode* middleNode(ListNode* head) {
//         int count=0;
//         ListNode* temp=head;
//         while(temp){
//             count++;
//             temp=temp->next;
//         }
//         count/=2;
//         temp=head;
//         while(count--){
//             temp=temp->next;
//         }
//         return temp;
        
        
        // //Slow and fast pointer
        // ListNode* slow=head;
        // ListNode* fast=head;
        // while(fast!=NULL && fast->next!=NULL){
        //     slow=slow->next;
        //     fast=fast->next->next;
        // }
        // return slow;
        
        ListNode* fast= head;
        ListNode* slow=head;
        while(fast && fast->next){
            slow=slow->next;
            fast=fast->next->next;
        }
        return slow;
        
        
        
        
    }
};