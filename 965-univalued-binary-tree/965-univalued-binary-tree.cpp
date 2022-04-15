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
    bool isUnivalTree(TreeNode* root) {
        if(root==NULL)return true;
        queue<TreeNode*>q;
        q.push(root);
        int data=root->val;
        while(!q.empty())
        {
            root=q.front();
            q.pop();
            if(root->val!=data)return false;
            
            if(root->right)q.push(root->right);
            if(root->left)q.push(root->left);
        }
        return true;
    }
};