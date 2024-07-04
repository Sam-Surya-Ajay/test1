class Solution 
{
public:
    int largestSumAfterKNegations(vector<int>& nums, int k) 
    {
        for(int i=0; i<k; i++)
        {
            int mini=INT_MAX, miniind;
            for(int j=0; j<nums.size(); j++)
            {
                if(nums[j]<mini)
                {
                    mini=nums[j];
                    miniind=j;
                }
            }
            nums[miniind]=-nums[miniind];  
        }

        int ans=0;
        for(int i=0; i<nums.size(); i++)
        {
            ans+=nums[i];
        }
        return ans;
    }
};