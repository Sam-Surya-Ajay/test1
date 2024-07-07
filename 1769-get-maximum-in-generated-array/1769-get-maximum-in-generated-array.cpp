class Solution {
public:
    int getMaximumGenerated(int n) {
        if (n == 0) return 0;
        
        vector<int> nums(n + 1);
        nums[0] = 0;
        if (n >= 1) nums[1] = 1;
        
        int maxi = nums[1]; // Start with the value of nums[1]
        
        for (int i = 1; i <= n; ++i) {
            if (2 * i <= n)
                nums[2 * i] = nums[i];
            if (2 * i + 1 <= n)
                nums[2 * i + 1] = nums[i] + (2 * i + 1 <= n ? nums[i + 1] : 0);
            
            maxi = max(maxi, nums[i]);
        }
        
        return maxi;
    }
};
