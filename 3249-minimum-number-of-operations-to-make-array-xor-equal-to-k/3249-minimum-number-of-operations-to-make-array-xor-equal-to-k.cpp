class Solution 
{
public:
    int count(int need)
    {
        int ans=0;
        while(need > 0)
        {
            need &= (need-1);
            ans++;
        }
        return ans;
    }
    int minOperations(vector<int>& nums, int k) 
    {
        int curr=0;
        for(int i=0; i<nums.size(); i++)
        {
            curr ^= nums[i];
        }

        int need=curr^k;

        return count(need);
    }
};