class Solution 
{
public:
    int totalMoney(int n) 
    {
        int temp=0, ans=0, prev=0;

        for(int i=1; i<=n; i++)
        {
            if(i%7 == 1)
            {
                temp++;
                ans+=temp;
                prev=temp;
            }
            else
            {
                prev++;
                ans+=prev;
            }
        }
        return ans;
    }
};