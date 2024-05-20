/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int fun(TreeNode* root){
        if(!root) return 0;
        return 1+max(fun(root->left), fun(root->right));
    }
    
    void right_view(TreeNode* root, int level, vector<int>& v){
        if(!root) return;
        if(v[level]==-101) v[level]=root->val;
        right_view(root->right, level+1, v);
        right_view(root->left, level+1, v);

    }
    vector<int> rightSideView(TreeNode* root) {
//         //Iterative approach
//         queue<TreeNode*> q;
//         q.push(root);
//         vector<int> ans;
//         if(!root) return ans;

//         while(!q.empty()){
//             int n=q.size();
//             TreeNode* alpha=q.front();
//             ans.push_back(q.front()->val);
//             while(n--){
//                 TreeNode* temp=q.front();
//                 q.pop();
//                 if(temp->right) q.push(temp->right);
//                 if(temp->left) q.push(temp->left);
//             }
//         }
//         return ans;
        
        int height=fun(root);
                vector<int> v(height,-101);
        right_view(root,0,v);
        return v;
    }
};