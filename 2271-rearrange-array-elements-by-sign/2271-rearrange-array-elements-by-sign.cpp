class Solution 
{
public:
    vector<int> rearrangeArray(vector<int>& nums) 
    {
        vector<int> pos, neg, ans(nums.size(), 0);
        
        for(int i=0; i<nums.size(); i++)
        {
            if(nums[i]>=0)
               pos.push_back(nums[i]);
            else if(nums[i]<0)
               neg.push_back(nums[i]);
        }
        int i=0, j=0;
        for(int k=0; k<nums.size(); k++)
        {
            if((k%2)==0)
               ans[k]=pos[i++];
            else
               ans[k]=neg[j++];
        }
        return ans;
    }
};