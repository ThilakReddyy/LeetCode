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
#define ll long long int
class Solution {
public:
    void dfs(TreeNode* root,int &mini,ll &ans)
    {
        if(root==NULL)return ;
        if(mini<root->val && root->val<ans){ans=root->val;return ;}
        dfs(root->left,mini,ans);
        dfs(root->right,mini,ans);
        
    }
    int findSecondMinimumValue(TreeNode* root) {
        int mini=root->val;
        ll  ans=INT_MAX;
        ans=ans+1;
        dfs(root,mini,ans);
        if(ans>INT_MAX)return -1;
        return ans;
    }
};