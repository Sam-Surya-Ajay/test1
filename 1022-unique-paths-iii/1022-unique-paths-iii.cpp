class Solution 
{
public:
    int cal(vector<vector<int>>& grid, int i, int j, int empty)
    {
        if(i>=grid.size() || j>=grid[0].size() || i<0 || j<0 || grid[i][j]==-1)
           return 0;
        if(grid[i][j]==2)
           return empty==0 ? 1 : 0;

        grid[i][j]=-1;
        empty--;

        int path=cal(grid, i+1, j, empty)+cal(grid, i-1, j, empty)+cal(grid, i, j+1, empty)+cal(grid, i, j-1, empty);
        
        grid[i][j]=0;
        empty++;

        return path;
    }
    int uniquePathsIII(vector<vector<int>>& grid) 
    {
        int start=0, end=0, empty=1;

        for(int i=0; i<grid.size(); i++)
        {
            for(int j=0; j<grid[0].size(); j++)
            {
                if(grid[i][j]==1)
                {
                    start=i;
                    end=j;
                }
                else if(grid[i][j]==0)
                {
                    empty++;
                }
            }
        }

        return cal(grid, start, end, empty);
    }
};