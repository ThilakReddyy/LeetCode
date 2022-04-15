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
    void tree2str(TreeNode* root,string &s)
    {
        
       s=s+to_string(root->val);
        if(root->left==NULL && root->right==NULL)return ;
        s.push_back('(');
        if(root->left!=NULL)tree2str(root->left,s);
        s.push_back(')');
        if(root->right!=NULL)
        {
            s.push_back('(');
            tree2str(root->right,s);
            s.push_back(')');
        }
    }
    string tree2str(TreeNode* root) {
        string s="";
        tree2str(root,s);
        return s;
    }
};