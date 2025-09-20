class Solution 
{
public:
    vector<int> maxSubsequence(vector<int>& nums, int k) 
    {
        vector<int> ans;
        vector<pair<int, int>> pairs;
        for(int i=0; i<nums.size(); i++)
        {
            pairs.push_back({nums[i], i});
        }
        sort(pairs.begin(), pairs.end(), [](auto &a, auto &b){
            if(a.first==b.first) 
               return a.second < b.second;
            return a.first > b.first;
        });
        
        vector<pair<int, int>> chosen(pairs.begin(), pairs.begin()+k);

        sort(chosen.begin(), chosen.end(), [](auto &a, auto &b){
            return a.second < b.second;
        });

        for(auto a:chosen)
        {
            ans.push_back(a.first);
        }
        return ans;
    }
};