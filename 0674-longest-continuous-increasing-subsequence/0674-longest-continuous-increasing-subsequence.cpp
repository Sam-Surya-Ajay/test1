class Solution 
{
public:
    int findLengthOfLCIS(vector<int>& nums) 
    {
        int ans=INT_MIN;
        int temp=1;
        for(int i=1; i<nums.size(); i++)
        {
            if(nums[i-1]<nums[i])
               temp++;
            else
            {
                ans=max(ans,temp);
                temp=1;
            }
        }
        ans=max(ans,temp);
        return ans;
    }
};