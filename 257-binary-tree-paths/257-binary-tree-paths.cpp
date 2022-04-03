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
    void binary(TreeNode* root,vector<string>&a,string s)
    {
        if(root==NULL)return ;
        if(root->left==NULL && root->right==NULL)
        {
            
            a.push_back(s+to_string(root->val));
            return ;
        }
        string p=s+to_string(root->val)+"->";
        binary(root->left,a,p);
        binary(root->right,a,p);
        
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string>s;
        if(root==NULL)return s;
        binary(root,s,"");
        return s;
    }
};