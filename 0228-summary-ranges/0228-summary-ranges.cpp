class Solution 
{
public:
    vector<string> summaryRanges(vector<int>& nums) 
    {
        vector<string> ans;
        
        int start=0;
        for(int i=0; i<nums.size(); i++)
        {
            while(i<nums.size()-1 && nums[i]==nums[i+1]-1)
            {
                i++;
            }
            if(start!=i)
            {
                ans.push_back(to_string(nums[start]) + "->" + to_string(nums[i]));
            }
            else
            {
                ans.push_back(to_string(nums[start]));
            }
            start=i+1;
        }
        return ans;
    }
};