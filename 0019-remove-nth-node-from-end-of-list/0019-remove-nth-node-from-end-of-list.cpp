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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
       // ListNode* temp=head;
       //  int count =0;
       //  while(temp){
       //      count++;
       //      temp=temp->next;
       //  }
       //  int from_start= count-n;
       //  if(count==1 && n==1) return head=NULL;
       //  if(from_start==0){
       //      temp=head;
       //      head=head->next;
       //      delete temp;
       //      return head;
       //  }
       //   temp=head;
       //  ListNode* prev=NULL;
       //  while(from_start--){
       //      prev=temp;
       //      temp=temp->next;
       //  }
       //  prev->next=temp->next;
       //  delete temp;
       //  return head;
        
        
        // int count=0;
        // ListNode* temp=head;
        // while(temp){
        //     count++; temp=temp->next;
        // }
        // count-=n;
        // ListNode* curr=head;
        // ListNode* prev=NULL;
        // while(count--){
        //     prev=curr; curr=curr->next;
        // }
        // if(prev==NULL){
        //     ListNode* temp=head;
        //     head=head->next;
        //     delete temp;
        //     return head;
        // }
        // prev->next=curr->next;
        // delete curr;
        // return head;
        
        
        ListNode* temp=head;
        int count=0;
        while(temp){
            count++;
            temp=temp->next;
        }
        int from_start= count-n;
        ListNode* curr=head;
        ListNode* prev=NULL;
        while(from_start--){
            prev=curr;
            curr=curr->next;
        }
        
        if(prev==NULL){
            ListNode* temp=head;
            head=head->next;
            delete temp;
            return head;
        }
        
        
        prev->next=curr->next;
        delete curr;
        return head;
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
    }
};