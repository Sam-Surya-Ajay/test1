class Solution 
{
public:
    vector<int> findErrorNums(vector<int>& nums) 
    {
        vector<int> ans;
        map<int,int> m;
        for(int i=0; i<nums.size(); i++)
        {
            m[nums[i]]++;
        }

        for(auto it:m)
        {
            if(it.second==2)
            {
                ans.push_back(it.first);
                break;
            }
        }

        for(int i=1; i<nums.size()+1; i++)
        {
            if(m[i]==0)
            {
                ans.push_back(i);
                break;
            }
        }
        return ans;
    }
};