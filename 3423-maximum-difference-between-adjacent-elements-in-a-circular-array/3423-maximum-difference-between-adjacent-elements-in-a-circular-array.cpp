class Solution 
{
public:
    int maxAdjacentDistance(vector<int>& nums) 
    {
        int ans=0, a, b;

        for(int i=0; i<nums.size(); i++)
        {
            a=nums[i];
            if(i==nums.size()-1)
            {
                b=nums[0];
            }
            else
            {
                b=nums[i+1];
            }
            if(abs(a-b) > ans)
               ans = abs(a-b);
        }
        return ans;
    }
};