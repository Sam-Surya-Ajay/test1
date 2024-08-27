class Solution 
{
public:
    vector<vector<int>> diagonalSort(vector<vector<int>>& mat) 
    {
        int m=mat.size(), n=mat[0].size();
        for(int r=0; r<m; r++)
        {
            vector<int> k;
            for(int i=r, j=0; i<m && j<n; i++, j++)  
                k.push_back(mat[i][j]);
            sort(k.begin(), k.end());
            for(int i=r, j=0; i<m && j<n; i++, j++)  
                mat[i][j]=k[j];
        }

        for(int c=0; c<n; c++)
        {
            vector<int> k;
            for(int i=0, j=c; i<m && j<n; i++, j++)  
                k.push_back(mat[i][j]);
            sort(k.begin(), k.end());
            for(int i=0, j=c; i<m && j<n; i++, j++)  
                mat[i][j]=k[i];
        }
        return mat;
    }
};