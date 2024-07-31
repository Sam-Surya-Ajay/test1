class Solution 
{
public:
    int subset(vector<int> &nums, int sum, int i) 
    {
        if (i == nums.size())
            return sum;
        return subset(nums, sum, i + 1) + subset(nums, sum ^ nums[i], i + 1);
    }

    int subsetXORSum(vector<int>& nums) 
    {
        return subset(nums, 0, 0);
    }
};