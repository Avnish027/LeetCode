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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* head1=headA;
        ListNode* head2=headB;
        int count1=0; int count2=0;
        while(head1){
            count1++;
            head1=head1->next;
        }
        while(head2){
            count2++;
            head2=head2->next;
        }
        
        head1=headA; head2=headB;
        if(count1>count2){
            count1-=count2;
            while(count1--) head1=head1->next;
        }
        else{
            count2-=count1;
            while(count2--) head2=head2->next;
        }
        
        while(head1!=head2){
            head1=head1->next;
            head2=head2->next;
        }
        if(head1==NULL || head2==NULL) return NULL;
        else return head1;
        
        
        
        
        
        
        
        
        
        
        
        
    }
};