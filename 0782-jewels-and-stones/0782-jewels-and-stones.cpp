class Solution 
{
public:
    int numJewelsInStones(string jewels, string stones) 
    {
        int ans=0;
        map<char, int> m;
        
        for(int i=0; i<jewels.size(); i++)
        {
            m[jewels[i]]=1;
        }
        for(int i=0; i<stones.size(); i++)
        {
            if(m[stones[i]]==1)
              ans++;
        }
        return ans;
    }
};