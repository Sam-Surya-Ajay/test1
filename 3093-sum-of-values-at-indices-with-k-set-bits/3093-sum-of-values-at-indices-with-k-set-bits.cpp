class Solution 
{
public:
    int sumIndicesWithKSetBits(vector<int>& nums, int k) 
    {
        int ans=0;
        for(int i=0; i<nums.size(); i++)
        {
            int binary=0;
            int x=i;
            while(x)
            {
                binary+=x%2;
                x/=2;
            }

            if(binary==k)
            {
                ans+=nums[i];
            }
        }
        return ans;
    }
};