class Solution 
{
public:
    int minimumRightShifts(vector<int>& nums) 
    {
        vector<int> sortednums = nums;
        sort(sortednums.begin(), sortednums.end());

        for(int i=0; i<nums.size(); i++)
        {
            if(nums == sortednums)
               return i;

            int last=nums.back();
            nums.pop_back();
            nums.insert(nums.begin(), last);
        }
        return -1;
    }
};