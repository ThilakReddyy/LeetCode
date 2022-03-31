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
    void getNodes(TreeNode* root,vector<int>&v)
    {
        if(root==NULL)return ;
        getNodes(root->left,v);
        v.push_back(root->val);
        getNodes(root->right,v);
    }
    TreeNode* increasingBST(TreeNode* root) {
        vector<int>v;
        getNodes(root,v);
        TreeNode* ret=new TreeNode(-1);
        TreeNode* reti=ret;
        for(auto i:v)
        {
            ret->right=new TreeNode(i);
            
            ret=ret->right;
        }
        return reti->right;
    }
};