class Solution 
{
public:
    void dfs(vector<vector<int>>& isConnected, vector<bool>& visited, int node)
    {
        visited[node]=true;

        for(int i=0; i<isConnected.size(); i++)
        {
            if(isConnected[node][i]==1 && visited[i]==false)
            {
                dfs(isConnected, visited, i);
            }
        }
    }

    int findCircleNum(vector<vector<int>>& isConnected) 
    {
        int ans=0;
        vector<bool> visited(isConnected.size(), false);

        for(int i=0; i<isConnected.size(); i++)
        {
            if(!visited[i])
            {
                ans++;
                dfs(isConnected, visited, i);
            }
        }

        return ans;
    }
};