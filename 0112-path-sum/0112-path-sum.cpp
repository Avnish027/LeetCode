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
    bool fun(TreeNode* root, int target, int sum){
        if(root==NULL) return 0;
        if(root->left==NULL && root->right==NULL){
            sum+=root->val;
            if(sum==target) return 1;
            else return 0;
        }
        sum+=root->val;
        return fun(root->left,target, sum) || fun(root->right, target, sum);
    }   
    
    bool hasPathSum(TreeNode* root, int targetSum) {
        if(!root) {
            return false;
        }
        int sum=0;
        return fun(root,targetSum,sum);
    }
};