class Solution 
{
public:
    vector<vector<int>> findMatrix(vector<int>& nums) 
    {
        map<int,int> m;
        for(int i=0; i<nums.size(); i++)
        {
            m[nums[i]]++;
        }
        int maxi=INT_MIN;
        for(auto it:m)
        {
            if(it.second>maxi)
               maxi=it.second;
        }

        vector<vector<int>> ans(maxi);
        for(int i=0; i<nums.size(); i++)
        {
            int j=0;
            while(find(ans[j].begin(), ans[j].end(), nums[i]) != ans[j].end())
                j++;
            ans[j].push_back(nums[i]);
        }
        return ans;
    }
};