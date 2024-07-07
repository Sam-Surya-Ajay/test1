class Solution 
{
public:
    int getMaximumGenerated(int n) 
    {
        if (n == 0) 
           return 0;
        if (n == 1) 
           return 1;
        
        vector<int> nums(n+1,0);
        nums[0] = 0;
        nums[1] = 1;
        
        for(int i=1; i<(int)(n+1)/2; i++)
        {
            nums[2 * i] = nums[i];
            nums[2 * i + 1] = nums[i] + nums[i + 1];
        }

        int maxi=INT_MIN;
        for(int i=0; i<nums.size(); i++)
        {
            maxi=max(maxi,nums[i]);
        }
        return maxi;
    }
};