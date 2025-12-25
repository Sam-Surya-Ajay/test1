class Solution 
{
public:
    int minimumOperations(vector<vector<int>>& grid) 
    {
        int ans=0;

        for(int i=0; i<grid[0].size(); i++)
        {
            int a = grid[0][i];
            for(int j=0; j<grid.size(); j++)
            {
                if(grid[j][i]>a)
                {
                    a=grid[j][i];
                }
                ans+=(a-grid[j][i]);
                a++;
            }
        }

        return ans;
    }
};