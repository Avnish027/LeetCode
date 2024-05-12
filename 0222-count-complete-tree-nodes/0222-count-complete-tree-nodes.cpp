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
    void pre_order(TreeNode* root, int& count){
        if(root==NULL) return;
        count++;
        pre_order(root->left,count);
        pre_order(root->right,count);
    }
        
        
    int countNodes(TreeNode* root) {
        int count=0;
        pre_order(root,count);
        return count;
    }
};