class Solution 
{
public:
    int minimumIndex(vector<int>& nums) 
    {
        map<int, int> m, left;
        for(int i=0; i<nums.size(); i++)
        {
            m[nums[i]]++;
        }
        for(int i=0; i<nums.size()-1; i++)
        {
            left[nums[i]]++, m[nums[i]]--;
            if((left[nums[i]]*2)>(i+1) && (m[nums[i]]*2)>nums.size()-1-i)
               return i;
        }
        return -1;
    }
};