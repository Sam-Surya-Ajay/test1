class Solution 
{
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) 
    {
        vector<int> ans(queries.size(), 0);
        
        for(int k=0; k<queries.size(); k++)
        {
            for(int i=queries[k][0]; i<=queries[k][1]; i++)
            {
                ans[k] ^= arr[i];
            }
        }

        return ans;
    }
};