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
    void RevInorder(TreeNode* root, int &sum)
    {
        if(root==NULL)return ;
        RevInorder(root->right,sum);
        sum+=root->val;
        root->val=sum;
        RevInorder(root->left,sum);
    }
    TreeNode* convertBST(TreeNode* root) {
        int sum=0;
        RevInorder(root,sum);
        return root;
    }
};