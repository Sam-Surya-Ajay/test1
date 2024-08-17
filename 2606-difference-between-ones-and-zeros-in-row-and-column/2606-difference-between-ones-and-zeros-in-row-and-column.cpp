class Solution 
{
public:
    vector<vector<int>> onesMinusZeros(vector<vector<int>>& grid) 
    {
        vector<vector<int>> diff(grid.size(), vector<int>(grid[0].size(), 0));
        vector<int> row(grid.size()), col(grid[0].size());

        for(int i=0; i<grid.size(); i++)
        {
            for(int j=0; j<grid[i].size(); j++)
            {
                if(grid[i][j]==1)
                {
                    row[i]++;
                    col[j]++;
                }
                  
            }
        }
        for(int i=0; i<diff.size(); i++)
        {
            for(int j=0; j<diff[i].size(); j++)
            {
                diff[i][j]=row[i]+col[j]-(diff[0].size()-row[i])-(diff.size()-col[j]);
            }
        }
        return diff;
    }
};