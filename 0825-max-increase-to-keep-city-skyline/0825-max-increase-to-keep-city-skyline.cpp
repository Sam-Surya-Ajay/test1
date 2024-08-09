class Solution 
{
public:
    int maxIncreaseKeepingSkyline(vector<vector<int>>& grid) 
    {
        int ans=0;
        for(int i=0; i<grid.size(); i++)
        {
            int maxrow=INT_MIN;
            for(int k=0; k<grid.size(); k++)
                maxrow=max(maxrow,grid[i][k]);

            for(int j=0; j<grid.size(); j++)
            {
                int maxcol=INT_MIN;
                for(int k=0; k<grid.size(); k++)
                    maxcol=max(maxcol,grid[k][j]);
                
                if(grid[i][j]!=maxrow && grid[i][j]!=maxcol)
                {
                    int height=min(maxrow, maxcol);
                    ans+=(height-grid[i][j]);
                }
            }
        }
        return ans;
    }
};