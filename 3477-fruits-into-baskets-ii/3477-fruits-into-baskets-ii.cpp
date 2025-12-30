class Solution 
{
public:
    int numOfUnplacedFruits(vector<int>& fruits, vector<int>& baskets) 
    {
        int ans=0, n=fruits.size();
        vector<int> check(n, 0);
        
        for(int i=0; i<n; i++)
        {
            int flag=0;
            for(int j=0; j<n; j++)
            {
                if(check[j]==0)
                {
                    if(baskets[j]>=fruits[i])
                    {
                        flag=1;
                        check[j]=1;
                        break;
                    }
                }
            }
            if(flag==0)
               ans++;
        }

        return ans;
    }
};