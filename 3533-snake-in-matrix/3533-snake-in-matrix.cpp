class Solution 
{
public:
    int finalPositionOfSnake(int n, vector<string>& commands) 
    {
        int ans=0;

        vector<vector<int>> grid(n, vector<int>(n,0));
        
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
            {
                grid[i][j]=(i*n)+j;
            }
        }  

        int i=0, j=0; 
        for(int a=0; a<commands.size(); a++)
        {
            if(commands[a]=="UP")
            {
                i--;
            }
            else if(commands[a]=="DOWN")
            {
                i++;
            }
            else if(commands[a]=="LEFT")
            {
                j--;
            }
            else if(commands[a]=="RIGHT")
            {
                j++;
            }
            ans=grid[i][j];
        }
        return ans;  
    }
};