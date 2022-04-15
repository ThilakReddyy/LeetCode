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
 
     int sumOfLeftLeaves(TreeNode* root,int c=1) {
        if (root == NULL)
            return 0;
        if (!root->left && !root->right && c == -1)
            return root->val;
        
        int la = sumOfLeftLeaves(root->left, -1);
        int ra = sumOfLeftLeaves(root->right, 1);
        return la + ra;
    }
};