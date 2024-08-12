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
class Solution 
{
public:
    TreeNode* ans(vector<int>& nums, int start, int end)
    {
        if(start>end)
        {
            return NULL;
        }

        int maxind, maxi=INT_MIN;
        for(int i=start; i<=end; i++)
        {
            if(maxi<nums[i])
            {
                maxi=nums[i];
                maxind=i;
            }
        }

        TreeNode* root=new TreeNode(nums[maxind]);
        root->left=ans(nums,start,maxind-1);
        root->right=ans(nums,maxind+1,end);
        return root;
    } 

    TreeNode* constructMaximumBinaryTree(vector<int>& nums) 
    {
        return ans(nums,0,nums.size()-1);
    }
};