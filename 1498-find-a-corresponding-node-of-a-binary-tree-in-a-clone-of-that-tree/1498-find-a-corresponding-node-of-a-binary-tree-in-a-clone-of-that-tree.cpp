/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution 
{
public:
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) 
    {
        if(cloned==NULL)
           return cloned;

        if(cloned->val == target->val)
           return cloned; 

        TreeNode* leftsearch = getTargetCopy(original, cloned->left, target);
        TreeNode* rightsearch = getTargetCopy(original, cloned->right, target); 

        if(leftsearch != NULL)
           return leftsearch;
        else 
           return rightsearch;
    }
};