class Solution 
{
public:
    int dominantIndex(vector<int>& nums) 
    {
        int ind=0, lar=nums[0];
        for(int i=0; i<nums.size(); i++)
        {
            if(nums[i]>lar)
            {
                lar=nums[i];
                ind=i;
            }
        }
        for(int i=0; i<nums.size(); i++)
        {
            if(i!=ind)
            {
                if(2*nums[i] > lar)
                   return -1;
            }
        }
        return ind;
    }
};