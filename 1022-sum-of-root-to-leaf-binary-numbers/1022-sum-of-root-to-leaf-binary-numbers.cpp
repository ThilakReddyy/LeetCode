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
    int sum=0;
    int sumRootToLeaf(TreeNode* root,int n=0) {
        if(root==NULL)return 0;
        if(root->left==NULL & root->right==NULL){sum+=root->val+n*2;}
        sumRootToLeaf(root->left,n*2+root->val);
        sumRootToLeaf(root->right,n*2+root->val);
        return sum;
    }
};