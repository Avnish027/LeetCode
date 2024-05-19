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
    int fun(TreeNode* root, int& valid){
        if(!root) return 0;
        int L= fun(root->left, valid);
        if(valid){
        int R= fun(root->right, valid);
        if(abs(L-R)>1) valid=0;
        return 1+max(L,R);}
        return 0;
    }
    
    
    bool isBalanced(TreeNode* root) {
        int valid=1;
        fun(root, valid);
        return valid;
    }
};