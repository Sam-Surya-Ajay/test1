class Solution 
{
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) 
    {
        queue<pair<int, int>> q;
        vector<pair<int, int>> directions={{1,0}, {0,1}, {-1,0}, {0,-1}};
        
        for(int i=0; i<mat.size(); i++)
        {
            for(int j=0; j<mat[0].size(); j++)
            {
                if(mat[i][j]==0)
                   q.push({i, j});
                else
                   mat[i][j]=INT_MAX;
            }
        }

        while(!q.empty())
        {
            pair<int, int> temp=q.front();
            q.pop();

            for(auto i:directions)
            {
                int row=temp.first+i.first;
                int col=temp.second+i.second;

                if(row>=0 && row<mat.size() && col>=0 && col<mat[0].size() && mat[row][col]>mat[temp.first][temp.second]+1)
                {
                    mat[row][col]=mat[temp.first][temp.second]+1;
                    q.push({row, col});
                }
            }
        }
        return mat;
    }
};