class Solution 
{
public:
    int findLHS(vector<int>& nums) 
    {
        sort(nums.begin(), nums.end());
        int left=0, right=1, ans=0;
        
        while(right < nums.size())
        {
            if(nums[right]-nums[left] == 1)
               ans=max(ans, right-left+1);
            while(nums[right]-nums[left] > 1) 
            {
                left++;
            }
            right++;  
        }
        return ans;
    }
};