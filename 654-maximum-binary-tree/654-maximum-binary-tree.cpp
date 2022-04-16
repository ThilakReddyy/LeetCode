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
    TreeNode* construct(vector<int>&nums,int start,int end)
    {
        if(end<=start)return NULL;
        int maxi_ind=start;
        for(int i=start;i<end;i++)
        {
           if(nums[maxi_ind]<nums[i])
            {
                maxi_ind=i;
            }
        }
         TreeNode* root=new TreeNode(nums[maxi_ind]);
        root->left=construct(nums,start,maxi_ind);
        root->right=construct(nums,maxi_ind+1,end);
        return root;
    }
    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
        int maxi_ind=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[maxi_ind]<nums[i])
            {
                maxi_ind=i;
            }
        }
        TreeNode* root=new TreeNode(nums[maxi_ind]);
        root->left=construct(nums,0,maxi_ind);
        root->right=construct(nums,maxi_ind+1,nums.size());
        return root;
        
    }
};