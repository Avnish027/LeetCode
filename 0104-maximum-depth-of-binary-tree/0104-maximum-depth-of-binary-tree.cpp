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
    
    
    
    int maxDepth(TreeNode* root) {
        // Iterative approach
        // queue<TreeNode*> q;
        // q.push(root);
        // int depth=0, level=0;
        // if(!root) return depth;
        // while(!q.empty()){
        //     depth++;
        //     level=q.size();
        //     while(level--){
        //         TreeNode* temp= q.front();
        //         q.pop();
        //         if(temp->left) q.push(temp->left);
        //         if(temp->right) q.push(temp->right);
        //     }
        // }
        // return depth;
        
        return fun(root);
    }
};