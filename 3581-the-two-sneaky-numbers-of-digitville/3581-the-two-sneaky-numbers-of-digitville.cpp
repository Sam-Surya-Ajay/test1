class Solution 
{
public:
    vector<int> getSneakyNumbers(vector<int>& nums) 
    {
        vector<int> ans;
        map<int, int> m;

        for(int i=0; i<nums.size(); i++)
        {
            m[nums[i]]++;
            if(m[nums[i]]==2)
               ans.push_back(nums[i]);
        } 
        return ans;
    }
};