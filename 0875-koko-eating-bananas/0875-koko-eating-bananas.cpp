class Solution 
{
public:
    int minEatingSpeed(vector<int>& piles, int h) 
    {
        int low=1, high=0, k;

        for(int i=0; i<piles.size(); i++)
        {
            high=max(high, piles[i]);
        }

        while(low<=high)
        {
            int mid=(low+high)/2;
            long long hoursreq=0;

            for(int i=0; i<piles.size(); i++)
            {
                hoursreq+=(piles[i]+mid-1)/mid;
            }
            if(hoursreq<=h)
            {
                k=mid;
                high=mid-1;
            }
            else
            {
                low=mid+1;
            }
        }
        return k;
    }
};