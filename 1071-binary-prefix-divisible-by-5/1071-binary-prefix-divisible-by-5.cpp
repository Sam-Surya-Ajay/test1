class Solution {
public:
    std::vector<bool> prefixesDivBy5(std::vector<int>& nums) {
        std::vector<bool> ans;
        int currentNum = 0;  // Initialize once outside the loop

        for (int i = 0; i < nums.size(); ++i) {
            // Left shift currentNum by 1 bit and add the current digit
            currentNum = (currentNum * 2 + nums[i]) % 5;
            // Check if the current number is divisible by 5
            ans.push_back(currentNum == 0);
        }

        return ans;
    }
};
