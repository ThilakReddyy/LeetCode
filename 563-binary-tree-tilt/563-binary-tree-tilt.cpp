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
    int valueSum(TreeNode* root,int &totalTilt){
        if (root==NULL)return 0;

        int leftSum = valueSum(root->left,totalTilt);
        int rightSum = valueSum(root->right,totalTilt);
        int tilt = abs(leftSum - rightSum);
        totalTilt += tilt;

        return root->val + leftSum + rightSum;
    }
   int findTilt(TreeNode* root) {
       int totalTilt=0;
             valueSum(root,totalTilt);
       return totalTilt;

    }

};