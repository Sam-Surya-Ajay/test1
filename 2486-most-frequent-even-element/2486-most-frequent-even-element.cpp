class Solution 
{
public:
    int mostFrequentEven(vector<int>& nums) 
    {
        map<int,int> m;
        for(int i=0; i<nums.size(); i++)
        {
            if(nums[i]%2 ==0)
            {
                m[nums[i]]++;
            }
        }

        int freq=INT_MIN, maxi=-1;
        for(auto it:m)
        {
            if(it.second>freq)
            {
                freq=it.second;
                maxi=it.first;
            }
        }
        return maxi;
    }
};