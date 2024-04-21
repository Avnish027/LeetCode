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
    ListNode* fun(ListNode* prev, ListNode* curr){
        if(curr->next==NULL){
            curr->next=prev;
            return curr;
        }
        ListNode* temp=curr->next;
        curr->next=prev;
        prev=curr; curr=temp;
        return fun(prev,curr);
    }
    
    
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
        
      //Without using extra memory  
//         ListNode* curr=head;
//         ListNode* prev=NULL;
//         while(curr){
//             ListNode* temp= curr->next;
//             curr->next=prev;
//             prev=curr;
//             curr=temp;
// }
//     return prev;
        
        
    //Recursion
        if(head==NULL) return head;
      return fun(NULL, head);  
        
           
        
    }
};