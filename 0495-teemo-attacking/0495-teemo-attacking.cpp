class Solution 
{
public:
    int findPoisonedDuration(vector<int>& timeSeries, int duration) 
    {
        int ans=0;
        for(int i=0; i<timeSeries.size()-1; i++)
        {
            ans += (timeSeries[i+1]-timeSeries[i] >= duration) ? duration : timeSeries[i+1]-timeSeries[i];
        }
        ans += duration;
        return ans;
    }
};