class Solution 
{
public:
    int pivotIndex(vector<int>& nums) 
    {
        for(int i=0; i<nums.size(); i++)
        {
            int leftsum=0, rightsum=0;
            for(int j=0; j<i; j++)
            {
                leftsum += nums[j];
            }
            for(int k=i+1; k<nums.size(); k++)
            {
                rightsum += nums[k];
            }

            if(leftsum==rightsum)
            {
                return i;
            }
        } 
        return -1;
    }
};