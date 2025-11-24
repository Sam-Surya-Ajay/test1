class Solution 
{
public:
    vector<int> findMissingElements(vector<int>& nums) 
    {
        vector<int> ans;
        int min=nums[0], max=nums[0];

        for(int i=0; i<nums.size(); i++)
        {
            if(nums[i]<min)
               min=nums[i];
            else if(nums[i]>max)
               max=nums[i];
        }

        for(int i=min; i<=max; i++)
        {
            if(find(nums.begin(), nums.end(), i)==nums.end())
               ans.push_back(i);
        }
        

        return ans;
    }
};