class Solution 
{
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        vector<int> ans(2,0);
        
        unordered_map<int, int> m;
        for(int i=0; i<nums.size(); i++)
        {
            int temp=target-nums[i];
            if(m.find(temp) != m.end())
            {
                ans[0]=i;
                ans[1]=m[temp];
            }
            else
            {
                m[nums[i]]=i;
            }
        }

        return ans;
    }
};