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
    void Inorder(TreeNode* root, vector<int>&v)
    {
        if(root==NULL)return ;
        Inorder(root->left,v);
        v.push_back(root->val);
        Inorder(root->right,v);
    }
    TreeNode* increasingBST(TreeNode* root) {
        vector<int>v;
        Inorder(root,v);
        TreeNode* rooti=new TreeNode(-1);
        TreeNode* ret=rooti;
        for(int i=0;i<v.size();i++)
        {
            TreeNode* temp=new TreeNode(v[i]);
            rooti->right=temp;
            rooti=temp;
        }
        return ret->right;
    }
};