class NeighborSum 
{
public:
    vector<vector<int>> g ;
    NeighborSum(vector<vector<int>>& grid) 
    {
        g=grid;
    }
    
    int adjacentSum(int value) 
    {
        int ans = 0 ;
        for ( int i = 0 ; i < g.size() ; i++ )
        {
            for ( int j = 0 ; j < g[i].size() ; j++ )
            {
                if ( g[i][j] == value )
                {
                    if (i-1>=0)
                        ans += g[i-1][j] ;
                    
                    if (j-1>=0)
                        ans += g[i][j-1] ;
                    
                    if (i+1<g.size())
                        ans += g[i+1][j] ;
                    
                    if (j+1<g[i].size())
                        ans += g[i][j+1] ;     
                }
            }
        }
        return ans ;
    }
    
    int diagonalSum(int value) 
    {
        int ans = 0 ;
        for ( int i = 0 ; i < g.size() ; i++ )
        {
            for ( int j = 0 ; j < g[i].size() ; j++ )
            {
                if ( g[i][j] == value )
                {
                    if (i-1>=0 && j-1>=0)
                        ans += g[i-1][j-1] ;
                    
                    if (i-1>=0 && j+1<g[i].size())
                        ans += g[i-1][j+1] ;
                    
                    if (i+1<g.size() && j-1>=0)
                        ans += g[i+1][j-1] ;
                    
                    if (i+1<g.size() && j+1<g[i].size())
                        ans += g[i+1][j+1] ;
                }
            }
        }
        return ans ;
    }
};

/**
 * Your NeighborSum object will be instantiated and called as such:
 * NeighborSum* obj = new NeighborSum(grid);
 * int param_1 = obj->adjacentSum(value);
 * int param_2 = obj->diagonalSum(value);
 */