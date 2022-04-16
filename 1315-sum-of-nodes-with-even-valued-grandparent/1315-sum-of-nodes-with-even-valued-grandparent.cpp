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
    void solve(TreeNode* root,int grandparent,int parent,int &sum)
    {
        if(root==NULL)return ;
        int parpass=(root->val)%2;
        solve(root->left,parent,parpass,sum);
        if(grandparent==0)
        {
            sum+=root->val;
        }
        solve(root->right,parent,parpass,sum);
    }
    int sumEvenGrandparent(TreeNode* root) {
        int sum=0;
        solve(root,1,1,sum);
        return sum;
    }
};