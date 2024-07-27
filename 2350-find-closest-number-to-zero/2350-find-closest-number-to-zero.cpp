class Solution 
{
public:
    int findClosestNumber(vector<int>& nums) 
    {
        int ans=INT_MAX;
        sort(nums.begin(), nums.end());

        for(int i=0; i<nums.size(); i++)
        {
            if(abs(nums[i])<=abs(ans))
                ans=nums[i]; 
        }
        return ans;
    }
};