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
        if(head==NULL) return NULL;
        set<int> v;
        ListNode* temp= head;
        while(temp){
            v.insert(temp->val);
            temp=temp->next;
        }
        temp=head;
        for(auto it=v.begin(); it!=v.end(); it++){
            temp->val=*it;
            temp=temp->next;
        }
        int size=v.size()-1;
        temp=head;
        while(size--){
            temp=temp->next;
        }
        temp->next=NULL;
        return head;
        
        
    }
};