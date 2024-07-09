class Solution 
{
public:
    int countBeautifulPairs(vector<int>& nums) 
    {
        int ans=0;
        
        for(int i=0; i<nums.size()-1; i++)
        {
            for(int j=i+1; j<nums.size(); j++)
            {
                int firstdigit=to_string(nums[i])[0] - '0';
                int lastdigit=nums[j]%10;

                if(gcd(firstdigit, lastdigit)==1)
                    ans++;
            }
        }

        return ans;
    }
};