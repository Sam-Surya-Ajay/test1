class Solution 
{
public:
    int minElement(vector<int>& nums) 
    {
        int mini=INT_MAX;
        for(int i=0; i<nums.size(); i++)
        {
            int temp=0, a=nums[i], b;
            while(a>0)
            {
                b=a%10;
                temp+=b;
                a/=10;  
            }
            nums[i]=temp;
            mini=min(mini, nums[i]);
        }
        return mini;
    }
};