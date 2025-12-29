class Solution 
{
public:
    int ans=0;
    bool check(vector<int>& nums)
    {
        if(nums.size()==0 || nums.size()==1)
           return false;
        
        else if(nums.size()==2)
        {
            if(nums[0]==nums[1])
               ans++;
            return false;
        }
        
        map<int, int> temp;
        for(int i=0; i<nums.size(); i++)
        {
            temp[nums[i]]++;
        }
        for(auto it:temp)
        {
            if(it.second>=2)
               return true;
        }
        return false;
    }

    int minimumOperations(vector<int>& nums) 
    {
        while(check(nums)==true)
        {
            ans++;
            nums.erase(nums.begin(), nums.begin()+3);
        }

        return ans;
    }
};