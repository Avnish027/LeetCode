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
    ListNode* deleteDuplicates(ListNode* head) {
        // Taking the extra space
        // if(head==NULL) return NULL;
        // set<int> v;
        // ListNode* temp= head;
        // while(temp){
        //     v.insert(temp->val);
        //     temp=temp->next;
        // }
        // temp=head;
        // for(auto it=v.begin(); it!=v.end(); it++){
        //     temp->val=*it;
        //     temp=temp->next;
        // }
        // int size=v.size()-1;
        // temp=head;
        // while(size--){
        //     temp=temp->next;
        // }
        // temp->next=NULL;
        // return head;
        
        
//         // Without taking the extra space
//         if(head==NULL) return NULL;
//         ListNode* curr=head;
//         ListNode* prev=NULL;
//         while(curr){
//             if(prev!=NULL){
//                 if(prev->val== curr->val){
//                     prev->next=curr->next;
//                     delete curr;
//                     curr=prev->next;
//                 }
//                 else{
//                     prev=curr;
//                     curr=curr->next;
//                 }
//             }
//             else{
//                 prev=curr;
//                 curr=curr->next;
//             }
//         }
//         return head;
        
        
        
        if(head==NULL) return NULL;
        ListNode* temp=head;
        set<int> st;
        while(temp){
            st.insert(temp->val);
            temp=temp->next;
        }
        temp=head;
        for(auto it=st.begin(); it!=st.end(); it++){
            temp->val=*it;
            temp=temp->next;
        }
        temp=head;
        int len= st.size()-1;
        while(len--){
            temp=temp->next;
        }
        temp->next=NULL;
        return head;
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
    }
};