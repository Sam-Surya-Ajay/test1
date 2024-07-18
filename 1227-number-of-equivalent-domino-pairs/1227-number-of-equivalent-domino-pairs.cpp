class Solution 
{
public:
    int numEquivDominoPairs(vector<vector<int>>& dominoes) 
    {
        int ans=0;
        map<int,int>m;
        
        for(auto it:dominoes)
        {
            int a=it[0], b=it[1];
            int key=(a<b) ? a*10+b : b*10+a;

            ans += m[key];
            
            m[key]++;
        }

        return ans;
    }
};