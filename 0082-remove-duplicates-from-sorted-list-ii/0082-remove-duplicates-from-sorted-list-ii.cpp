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
        if(head==NULL || head->next==NULL) return head;
        ListNode* curr= head->next;
        ListNode* prev=head;
        vector<int> v;
        bool flag=true;
        while(curr){
            if(curr->val == prev->val){
                if(flag) {v.push_back(curr->val); flag=false;}
                prev->next=curr->next;
                delete curr;
                curr=prev->next;
            }
            else{
                prev=curr;
                curr=curr->next;
                flag=true;
                }
            
        }
        reverse(v.begin(), v.end());
        prev=NULL;
        curr=head;
//         while(curr && v.size()>0){
//             if(curr->val==v[v.size()-1]){
//                 if(prev==NULL){
//                 ListNode* temp=curr->next;
//                 delete curr;
//                 curr=temp;
//                 v.pop_back();
//             }
//             else {
//                 ListNode* temp=curr->next;
//                 delete curr;
//                 curr=temp;
//                 prev->next=curr;
//                 v.pop_back();
//             }
//             }
            
//             else{
//                 prev=curr;
//                 curr=curr->next;
//             }
//         } 
        while (curr) {
            if (v.size() > 0 && curr->val == v.back()) {
                ListNode* temp = curr;
                curr = curr->next;
                delete temp;
                if (prev) {
                    prev->next = curr;
                } else {
                    head = curr;
                }
                v.pop_back();
            } else {
                prev = curr;
                curr = curr->next;
            }
        }
        return head;
    }
};