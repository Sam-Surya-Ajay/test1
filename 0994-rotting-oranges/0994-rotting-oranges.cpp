class Solution 
{
public:
    int orangesRotting(vector<vector<int>>& grid) 
    {
        int fresh=0;
        queue<pair<int, int>> q;

        for(int i=0; i<grid.size(); i++)
        {
            for(int j=0; j<grid[0].size(); j++)
            {
                if(grid[i][j]==1)
                   fresh++;
                else if(grid[i][j]==2)
                    q.push({i,j});
            }
        }

        int ans=0;
        while(!q.empty())
        {
            int n=q.size();
            for(int i=0; i<n; i++)
            {
                pair<int, int> p=q.front();
                q.pop();

                if(p.first+1<grid.size() && grid[p.first+1][p.second]==1)
                {
                    fresh--;
                    grid[p.first+1][p.second]=2;
                    q.push({p.first+1, p.second});
                }
                if(p.first-1>=0 && grid[p.first-1][p.second]==1)
                {
                    fresh--;
                    grid[p.first-1][p.second]=2;
                    q.push({p.first-1, p.second});
                } 
                if(p.second+1<grid[0].size() && grid[p.first][p.second+1]==1)
                {
                    fresh--;
                    grid[p.first][p.second+1]=2;
                    q.push({p.first, p.second+1});
                } 
                if(p.second-1>=0 && grid[p.first][p.second-1]==1)
                {
                    fresh--;
                    grid[p.first][p.second-1]=2;
                    q.push({p.first, p.second-1});
                } 
            }
            ans++;
        }
        
        if(fresh>0)
           return -1;

        return ans==0?ans:ans-1;
    }
};