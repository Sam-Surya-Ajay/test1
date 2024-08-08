class Solution 
{
public:
    int minOperations(vector<int>& nums, int k) 
    {
        int i=0;

        sort(nums.begin(), nums.end());
        while(nums[i]<k)
        {
            i++;
        }
        return i;
    }
};