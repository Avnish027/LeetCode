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
    ListNode* reverseList(ListNode* head) {
        // vector<int> v;
        // ListNode* temp= head;
        // while(temp){
        //     v.push_back(temp->val);
        //     temp=temp->next;
        // }
        // temp=head;
        // int i=v.size()-1;
        // while(temp){
        //     temp->val=v[i--];
        //     temp=temp->next;
        // }
        // return head;
        
        ListNode* prev=NULL;
        ListNode* curr=head;
        while(curr){
            ListNode* temp=curr->next;
            curr->next=prev;
            prev=curr;
            curr=temp;
        }
        
        head=prev;
        return head;
           
        
    }
};