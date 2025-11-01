class Solution 
{
public:
    int smallestIndex(vector<int>& nums) 
    {
        for(int i=0; i<nums.size(); i++)
        {
            int temp=nums[i], a, sum=0;
            
            while(temp>0)
            {
                a=temp%10;
                temp=temp/10;

                sum+=a;
            }
            if(sum==i)
               return i;
        }
        return -1;
    }
};