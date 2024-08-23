class Solution 
{
public:
    bool canAliceWin(vector<int>& nums) 
    {
        vector<int> sing, doub;
        for(int i=0; i<nums.size(); i++)
        {
            if(nums[i]<10)
              sing.push_back(nums[i]);
            else
              doub.push_back(nums[i]);
        }
        int sum1=accumulate(sing.begin(), sing.end(), 0);
        int sum2=accumulate(doub.begin(), doub.end(), 0);

        if(sum1==sum2)
           return false;
        return true;
    }
};