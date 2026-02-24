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
    int ans=INT_MIN;
    int check(TreeNode* root)
    {
        if(!root)
           return 0;

        int left=check(root->left);
        int right=check(root->right);

        ans=max(ans, left+right+root->val);

        return max(0, max(left, right)+root->val);
    }

    int maxPathSum(TreeNode* root) 
    {
        check(root);
        return ans;
    }
};