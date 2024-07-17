class Solution 
{
public:
    vector<int> circularGameLosers(int n, int k) 
    {
        map<int,int> m;
        
        int i=0, turn=1;
        while(m[i]!=1)
        {
            m[i]++;

            int temp=turn*k;
            i=(i+temp)%n;
            turn++;
        }
        
        vector<int> ans;
        for(int i=0; i<n; i++)
        {
            if(m[i]==0)
               ans.push_back(i+1);
        }
        sort(ans.begin(), ans.end());
        return ans;
        
    }
};