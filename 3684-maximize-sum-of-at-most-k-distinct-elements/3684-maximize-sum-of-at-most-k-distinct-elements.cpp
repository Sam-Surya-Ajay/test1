class Solution 
{
public:
    vector<int> maxKDistinct(vector<int>& nums, int k) 
    {
        vector<int> ans;
 
        sort(nums.begin(), nums.end(), greater<int>());

        ans.push_back(nums[0]);
        for(int i=1; i<nums.size() && ans.size()<k; i++)
        {
            if(nums[i]!=nums[i-1])
              ans.push_back(nums[i]);
        }
        return ans;
    }
};