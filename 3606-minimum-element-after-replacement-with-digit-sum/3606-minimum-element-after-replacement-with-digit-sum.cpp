class Solution 
{
public:
    int minElement(vector<int>& nums) 
    {
        int mini=INT_MAX;
        for(int i=0; i<nums.size(); i++)
        {
            int temp=0, a=nums[i], b=nums[i]%10;
            while(a>0)
            {
                temp+=b;
                a/=10;
                b=a%10;
            }
            nums[i]=temp;
            if(nums[i]<mini)
               mini=nums[i];
        }
        return mini;
    }
};