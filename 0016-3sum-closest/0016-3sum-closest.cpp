class Solution 
{
public:
    int threeSumClosest(vector<int>& nums, int target) 
    {
        int ans=0, diff=INT_MAX;

        sort(nums.begin(), nums.end());
        
        for(int i=0; i<nums.size()-2; i++)
        {
            int l=i+1, r=nums.size()-1;
            while(l<r)
            {
                if(abs((nums[i]+nums[l]+nums[r])-target) < diff)
                {
                    ans=nums[i]+nums[l]+nums[r];
                    diff=abs((nums[i]+nums[l]+nums[r])-target);
                    if(ans < target)
                        l++;
                    else
                        r--;
                }
                else if(nums[i]+nums[l]+nums[r] < target)
                {
                    l++;
                }
                else
                {
                    r--;
                }
            }
        }

        return ans;
    }
};