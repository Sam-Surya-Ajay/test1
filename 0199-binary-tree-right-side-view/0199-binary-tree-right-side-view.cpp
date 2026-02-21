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
    queue<TreeNode*> q;
    vector<int> ans;
    vector<int> rightSideView(TreeNode* root) 
    {
       if(root==NULL)
       {
          return ans;
       }
       q.push(root);

       while(!q.empty())
       {
          int s=q.size();
          for(int i=0; i<s; i++)
          {
              TreeNode* temp=q.front();
              q.pop();

              if(i==s-1)
                ans.push_back(temp->val);
              
              if(temp->left!=NULL)
                q.push(temp->left);
              if(temp->right!=NULL)
                q.push(temp->right);
          }
       }  
       return ans;
    }
};