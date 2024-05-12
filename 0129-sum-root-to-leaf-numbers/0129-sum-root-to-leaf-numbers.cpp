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
    void fun(TreeNode* root, int ans, vector<int>& v){
        if(root==NULL) return;
        if(root->left==NULL && root->right==NULL){ v.push_back(ans*10+(root->val)); return;}
        ans=ans*10+(root->val);
        fun(root->left,ans,v);
         fun(root->right,ans,v);

    }
    
    
    int sumNumbers(TreeNode* root) {
        vector<int> v;
        int ans=0;
        int a=0;
        fun( root, ans, v);
        for(int i=0; i<v.size();i++){
            a+=v[i];
        }
        return a;
    }
};