class Solution 
{
public:
    vector<bool> checkArithmeticSubarrays(vector<int>& nums, vector<int>& l, vector<int>& r) 
    {
        vector<bool> ans;
        for(int i=0; i<l.size(); i++)
        {
            vector<int> temp;
            for(int j=l[i]; j<=r[i]; j++)
            {
                temp.push_back(nums[j]);
            }
            
            sort(temp.begin(), temp.end());
            
            int j;
            for(j=0; j<temp.size()-1; j++)
            {
                if(temp[j+1]-temp[j] != temp[1]-temp[0])
                {
                    ans.push_back(false);
                    break;
                }
            }
            if(j==temp.size()-1)
              ans.push_back(true);
        }
        return ans;
    }
};