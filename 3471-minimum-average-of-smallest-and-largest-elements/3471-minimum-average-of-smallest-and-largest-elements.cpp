class Solution 
{
public:
    double minimumAverage(vector<int>& nums) 
    {
        double ans=INT_MAX;

        sort(nums.begin(), nums.end());
        int n=nums.size();
        for(int i=0; i<n/2; i++)
        {
            ans=min(ans,static_cast<double>(nums[i]+nums[n-1-i])/2);
        }

        return ans;
    }
};