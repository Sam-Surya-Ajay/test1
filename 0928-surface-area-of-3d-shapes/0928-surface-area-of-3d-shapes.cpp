class Solution 
{
public:
    int surfaceArea(vector<vector<int>>& grid) 
    {
        int ans=0;
        for(int i=0; i<grid.size(); i++)
        {
            for(int j=0; j<grid[i].size(); j++)
            {
                if(grid[i][j]!=0)
                {
                    ans+=(grid[i][j]*6)-((grid[i][j]-1)*2);
                    if(i+1<grid.size())
                       ans-=min(grid[i][j], grid[i+1][j]);
                    if(j+1<grid[i].size())
                       ans-=min(grid[i][j], grid[i][j+1]);
                    if(i!=0)
                       ans-=min(grid[i][j], grid[i-1][j]);
                    if(j!=0)
                       ans-=min(grid[i][j], grid[i][j-1]);
                }
            }
        }
        return ans;
    }
};