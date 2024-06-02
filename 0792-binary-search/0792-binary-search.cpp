class Solution 
{
public:
    int bin(vector<int>& nums, int target, int l, int h)
    {
        if(l<=h)
        {
           int mid=(l+h)/2;
        
           if(nums[mid]==target)
              return mid;
           else if(target<nums[mid])
              return bin(nums, target, l, mid-1);
           else if(target>nums[mid])
              return bin(nums, target, mid+1, h);
        }
        return -1;
    }

    int search(vector<int>& nums, int target) 
    {
        return bin(nums, target, 0, nums.size()-1);
    }
};