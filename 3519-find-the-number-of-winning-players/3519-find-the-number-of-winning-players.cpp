class Solution 
{
public:
    int winningPlayerCount(int n, vector<vector<int>>& pick) 
    {
        int ans=0;
        vector<vector<int>> temp(n);
        
        for(int i=0; i<pick.size(); i++)
        {
            temp[pick[i][0]].push_back(pick[i][1]);
        }

        for(int i=0; i<temp.size(); i++)
        {
            if(temp[i].size() > i)
            {
                map<int, int> m;
                for(int j=0; j<temp[i].size(); j++)
                {
                    m[temp[i][j]]++;
                    if(m[temp[i][j]] > i)
                    {
                        ans++;
                        break;
                    }
                }
            }
        }

        return ans;
    }
};