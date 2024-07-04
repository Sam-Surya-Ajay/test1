class Solution 
{
public:
    bool valid(vector<vector<char>>& grid)
    {
        for(int i=0; i<grid.size()-1; i++)
        {
            for(int j=0; j<grid[0].size()-1; j++)
            {
                 if(grid[i][j]==grid[i+1][j] && grid[i][j]==grid[i][j+1] && grid[i][j]==grid[i+1][j+1])
                      return true;
            }
        }
        return false;
    }

    bool canMakeSquare(vector<vector<char>>& grid) 
    {
        for(int i=0; i<grid.size(); i++)
        {
            for(int j=0; j<grid[0].size(); j++)
            {
                char originalcolour=grid[i][j];
                grid[i][j]=(originalcolour=='B') ? 'W' : 'B';

                if(valid(grid))
                    return true;

                grid[i][j]=originalcolour;
            }
        }

        return false;
    }
};