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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int carry=0;
        ListNode* a=NULL;
        ListNode* tail=NULL;
        while(l1!=NULL && l2!=NULL){
            int sum=(l1->val)+(l2->val)+carry;
            int digit=sum%10;
            ListNode* temp= new ListNode(digit);
            carry=sum/10;
            if(a==NULL){
                a=temp; tail=a;
            }
            else{
                tail->next=temp;
                tail=tail->next;
            }
            l1=l1->next;
            l2=l2->next;
        }
        
        while(l1!=NULL){
            int sum=l1->val+carry;
            ListNode* temp=new ListNode(sum%10);
            carry=sum/10;
             if(a==NULL){
                a=temp; tail=a;
            }
            else{
                tail->next=temp;
                                tail=tail->next;

            }
            l1=l1->next;
            
        }
        
            while(l2!=NULL){
            int sum=l2->val+carry;
            ListNode* temp=new ListNode(sum%10);
            carry=sum/10;
             if(a==NULL){
                a=temp; tail=a;
            }
            else{
                tail->next=temp;
                                tail=tail->next;

            }
                l2=l2->next;
            
        }
        
        if(carry!=0) {
            ListNode* temp= new ListNode(carry);
            tail->next=temp;
        }
        
        
    return a; 
        
        
        
        
    }
};