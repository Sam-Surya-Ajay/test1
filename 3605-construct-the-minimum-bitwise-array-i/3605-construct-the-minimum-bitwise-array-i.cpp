class Solution 
{
public:
    vector<int> minBitwiseArray(vector<int>& nums) 
    {
        vector<int> ans(nums.size(),0);
        for(int i=0; i<nums.size(); i++)
        {
            while(((ans[i]|(ans[i]+1))!=nums[i]) && (ans[i]<nums[i]))
            {
                ans[i]++;
            }
            if((ans[i]|(ans[i]+1))!=nums[i])
            {
                ans[i]=-1;
            }
        }
        return ans;
    }
};