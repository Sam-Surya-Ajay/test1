class Solution 
{
public:
    vector<int> transformArray(vector<int>& nums) 
    {
        vector<int> ans(nums.size(), 0);
        int j=nums.size()-1;

        for(int i=0; i<nums.size(); i++)
        {
            if(nums[i]%2 != 0)
            {
                ans[j]=1;
                j--;
            }
        }
        return ans;
    }
};