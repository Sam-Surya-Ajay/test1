class Solution 
{
public:
    int duplicateNumbersXOR(vector<int>& nums) 
    {
        int ans=0;

        map<int, int> m;
        vector<int> temp;

        for(int i=0; i<nums.size(); i++)
        {
            m[nums[i]]++;
            if(m[nums[i]]==2)
               temp.push_back(nums[i]);
        }
        
        for(int i=0; i<temp.size(); i++)
        {
            ans ^= temp[i];
        }
        return ans;
    }
};