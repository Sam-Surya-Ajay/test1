class Solution 
{
public:
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) 
    {
        while(k>0)
        {
            vector<int> temp=nums;
            sort(temp.begin(), temp.end());
            for(int i=0; i<nums.size(); i++)
            {
                if(temp[0]==nums[i])
                {
                    nums[i]*=multiplier;
                    break;
                }
            }
            k--;
        }
        return nums;
    }
};