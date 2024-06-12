class Solution 
{
public:
    bool canFormArray(vector<int>& arr, vector<vector<int>>& pieces) 
    {
        map<int, vector<int>> m;
        for(int i=0; i<pieces.size(); i++)
        {
            m[pieces[i][0]]=pieces[i];
        }

        vector<int> result;
        for(int i=0; i<arr.size(); i++)
        {
            if(m.find(arr[i]) != m.end())
               result.insert(result.end(), m[arr[i]].begin(), m[arr[i]].end());
        }
        return arr==result;
    }
};