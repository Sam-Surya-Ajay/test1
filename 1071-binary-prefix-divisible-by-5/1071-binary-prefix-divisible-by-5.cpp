class Solution {
public:
    vector<bool> prefixesDivBy5(std::vector<int>& nums) 
    {
        vector<bool> ans;
        int currentNum = 0; 

        for (int i = 0; i < nums.size(); ++i) 
        {    
            currentNum = (currentNum * 2 + nums[i]) % 5;
    
            ans.push_back(currentNum == 0);
        }
        return ans;
    }
};
