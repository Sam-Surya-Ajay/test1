class Solution 
{
public:
    int findJudge(int n, vector<vector<int>>& trust) 
    {
        if(n-1 > trust.size())
           return -1;

        map<int,int> m;
        for(int i=0; i<trust.size(); i++)
        {
            m[trust[i][1]]++;
            m[trust[i][0]]--;
        }

        for(int i=1; i<=n ; i++)
        {
            if(m[i]==n-1)
               return i;
        }
        return -1;
    }
};