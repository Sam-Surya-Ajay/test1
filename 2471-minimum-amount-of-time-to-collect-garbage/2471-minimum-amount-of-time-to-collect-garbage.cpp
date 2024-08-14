class Solution 
{
public:
    int garbageCollection(vector<string>& garbage, vector<int>& travel) 
    {
        int ans=0, lastm=0, lastp=0, lastg=0;
        for(int i=0; i<garbage.size(); i++)
        {
            ans+=garbage[i].size();
            for(int j=0; j<garbage[i].size(); j++)
            {
                if(garbage[i][j]=='M')
                   lastm=i;
                else if(garbage[i][j]=='P')
                   lastp=i;
                else if(garbage[i][j]=='G')
                   lastg=i;   
            }
        }
        for(int i=1; i<garbage.size(); i++)
        {
            if(i<=lastm)
              ans+=travel[i-1];
            if(i<=lastp)
              ans+=travel[i-1];
            if(i<=lastg)
              ans+=travel[i-1];
        }
        return ans;
    }
};