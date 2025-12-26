class Solution 
{
public:
    int absDifference(vector<int>& nums, int k) 
    {
        int a=0, b=0;
        
        sort(nums.begin(), nums.end());

        for(int i=0; i<k; i++)
        {
            a+=nums[i];
            b+=nums[nums.size()-1-i];
        }

        return abs(a-b);
    }
};