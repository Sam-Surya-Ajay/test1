class Solution 
{
public:
    int shipWithinDays(vector<int>& weights, int days) 
    {
        int l=0, h=0;
        for(int i=0; i<weights.size(); i++)
        {
            l=max(l, weights[i]);
            h+=weights[i];
        }

        while(l<=h)
        {
            int mid=(l+h)/2, d=1, temp=0;

            for(int i=0; i<weights.size(); i++)
            {
                if(temp+weights[i]>mid)
                {
                    d++;
                    temp=0;
                }
                temp+=weights[i];
            }
             
            if(d<=days)
                h=mid-1;
            else
                l=mid+1;
        }

        return l;
    }
};