class Solution 
{
public:
    vector<vector<int>> restoreMatrix(vector<int>& rowSum, vector<int>& colSum) 
    {
        vector<vector<int>> mat(rowSum.size(), vector<int>(colSum.size(), 0));
        for(int i=0; i<mat.size(); i++)
        {
            for(int j=0; j<mat[i].size(); j++)
            {
                mat[i][j]=min(rowSum[i], colSum[j]);
                rowSum[i]-=mat[i][j];
                colSum[j]-=mat[i][j];
            }
        }
        return mat;
    }
};