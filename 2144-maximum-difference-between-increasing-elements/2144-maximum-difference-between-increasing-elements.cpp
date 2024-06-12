class Solution 
{
public:
    int maximumDifference(vector<int>& nums) 
    {
        int ans=INT_MIN;
        for(int i=0; i<nums.size()-1; i++)
        {
            for(int j=i+1; j<nums.size(); j++)
            {
                if(nums[i] < nums[j])
                {
                    ans=max(ans, nums[j]-nums[i]);
                }
            }
        }
        if(ans==INT_MIN)
           return -1;
        return ans;
    }
};