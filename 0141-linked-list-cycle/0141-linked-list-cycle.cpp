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
    bool fun(vector<ListNode*>& v, ListNode* Node){
        for(int i=0; i<v.size(); i++){
            if(v[i]==Node) return true;
        }
        return false;
    }
    bool hasCycle(ListNode *head) {
       vector<ListNode*> v;
        ListNode* curr=head;
        while(curr){
            if(!fun(v,curr)){
                v.push_back(curr);
                curr=curr->next;
            }
            else return true;
        }
        return false;
    }
};