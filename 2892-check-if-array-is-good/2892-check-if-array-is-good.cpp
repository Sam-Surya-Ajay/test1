class Solution 
{
public:
    bool isGood(vector<int>& nums) 
    {
        sort(nums.begin(), nums.end());

        vector<int> base;
        for(int i=1; i<=nums[nums.size()-1]; i++)
        {
            base.push_back(i);
        } 
        base.push_back(nums[nums.size()-1]);

        return nums==base;
    }
};