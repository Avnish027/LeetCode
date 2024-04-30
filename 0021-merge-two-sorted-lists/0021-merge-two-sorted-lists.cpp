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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
       ListNode* Head=NULL; ListNode* Tail=NULL;
        while(list1 && list2){
            ListNode* temp;
            if(list1->val> list2->val){
                temp= new ListNode(list2->val);
                    list2=list2->next;
            }
            else{
                temp= new ListNode(list1->val);
                list1=list1->next;
            }
            if(Head==NULL){
                Head=temp;
                Tail=Head;
            }
            else{
                Tail->next=temp;
                Tail=temp;
            }
            
        }
        
        
        while(list1){
            if(Head==NULL){
                Head=list1;
                Tail=Head;
            }
            else{
                Tail->next=list1;
                Tail=list1;
            }
            list1=list1->next;
        }
        while(list2){
            if(Head==NULL){
                Head=list2;
                Tail=Head;
            }
            else{
                Tail->next=list2;
                Tail=list2;
            }
            list2=list2->next;
        }
        
        return Head;
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
    }
};