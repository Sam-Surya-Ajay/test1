class Solution 
{
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) 
    {
        if((r*c) != (mat.size()*mat[0].size()))
           return mat;
        
        vector<vector<int>> ans(r, vector<int>(c,0));
       
        vector<int>temp;
        for(int i=0; i<mat.size(); i++)
        {
            for(int j=0; j<mat[0].size(); j++)
            {
                temp.push_back(mat[i][j]);
            }
        }

        int a=0;  
        for(int i=0; i<ans.size(); i++)
        {
            for(int j=0; j<ans[0].size(); j++)
            {
                ans[i][j]=temp[a++];
            }
        }
        return ans;
    }
};