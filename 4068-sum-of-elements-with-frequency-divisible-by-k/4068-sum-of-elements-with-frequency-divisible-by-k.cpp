class Solution 
{
public:
    int sumDivisibleByK(vector<int>& nums, int k) 
    {
        int ans=0;
        map<int, int> m;

        for(int i=0; i<nums.size(); i++)
        {
            m[nums[i]]++;
        }
        for(auto temp:m)
        {
            if(temp.second%k==0)
               ans+=(temp.first*temp.second);
        }
        return ans;
    }
};