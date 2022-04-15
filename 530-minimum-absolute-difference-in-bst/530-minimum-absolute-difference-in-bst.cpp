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
    void preorder(TreeNode *root,int &mini)
    {
        if(root==NULL)return ;
       
        preorder(root->left,mini);
         if(root->left)
        {
            mini=min(mini,abs(root->val-root->left->val));
        }
         if(root->right)
        {
            mini=min(mini,abs(root->val-root->right->val));
        }
        preorder(root->right,mini);
    }
    int getMinimumDifference(TreeNode* root) {
        // which is sorted one in bst
        vector<int> arr;
        
        TreeNode* curr=root;
        
        stack<TreeNode*> stk;
        
        while(!stk.empty() || curr!=NULL)
        {
            while(curr!=NULL)
            {
                stk.push(curr);
                
                curr=curr->left;
            }
            
            curr=stk.top();
            stk.pop();
            arr.push_back(curr->val);
            
            curr=curr->right;
        }
        int minval=INT_MAX;
        for(int i=1;i<arr.size();i++)
        {
            minval=min(arr[i]-arr[i-1] , minval);
        }
        return minval;
    }
};