class Solution 
{
public:
    int minOperations(vector<int>& nums, int k) 
    {
        for(int i=0; i<nums.size(); i++)
        {
            if(nums[i]<k)
               return -1;
        }

        set<int> st;
        for(int i=0; i<nums.size(); i++)
        {
            st.insert(nums[i]);
        }

        int ans=0;
        for(int x:st)
        {
            if(x>k)
              ans++;
        }

        return ans;
    }
};