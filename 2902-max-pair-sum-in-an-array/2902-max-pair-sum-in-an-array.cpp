class Solution 
{
public:
    int maximum(int num)
    {
        int maxi=-1;
        while(num)
        {
            int digit=num % 10;
            if(maxi < digit)
            {
                maxi=digit;
            }
            num /= 10;
        }
        return maxi;
    }

    int maxSum(vector<int>& nums) 
    {
        int maxi=-1;
        
        for(int i=0; i<nums.size(); i++)
        {
            for(int j=i+1; j<nums.size(); j++)
            {
                if(maximum(nums[i])==maximum(nums[j]))
                {
                    maxi=max(maxi, nums[i]+nums[j]);
                }
            }
        }
        return maxi;
    }
};