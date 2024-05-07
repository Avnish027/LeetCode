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
    ListNode* doubleIt(ListNode* head) {
       vector<int> v;
        ListNode* temp=head;
        while(temp){
            v.push_back(temp->val);
            temp=temp->next;
        }
        reverse(v.begin(),v.end());
        int carry=0;
        for(int i=0; i<v.size();i++){
            int no=(2*v[i]) +carry;
            v[i]=no%10;
            carry=no/10;
        }
        if(carry!= 0) {v.push_back(carry);}
        reverse(v.begin(), v.end());
        temp=head;
        // for(int i=0; i<v.size(); i++){
        //     if(temp->next==NULL){
        //         temp->val=v[i];
        //         if(i+1>v.size()){
        //         ListNode* temp1=new ListNode(1);
        //         temp->next=temp1;
        //         temp=temp1;}
        //     }
        //     else {temp->val=v[i];temp=temp->next;}
        // }
        ListNode* temp1=NULL;
        ListNode* b;
        for(int i=0; i<v.size(); i++){
            if(temp1==NULL){
                temp1=new ListNode(v[i]);
                b=temp1;
            }
            else{
                ListNode* a=new ListNode(v[i]);
                temp1->next=a;
                temp1=a;
            }
        
        }
        return b;
    }
};