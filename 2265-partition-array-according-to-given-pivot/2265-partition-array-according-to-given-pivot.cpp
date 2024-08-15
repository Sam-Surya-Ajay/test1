class Solution 
{
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) 
    {
        vector<int> ans, b;
        for(int i=0; i<nums.size(); i++)
        {
            if(nums[i]<pivot)
               ans.push_back(nums[i]);
            else if(nums[i]>pivot)
               b.push_back(nums[i]);
            else
               b.insert(b.begin(),nums[i]);
        }
        for(int i=0; i<b.size(); i++)
        {
            ans.push_back(b[i]);
        }
        return ans;
    }
};