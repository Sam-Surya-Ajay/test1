class Solution 
{
public:
    int maxDivScore(vector<int>& nums, vector<int>& divisors) 
    {
        int maxscore=0, ans=divisors[0];
        for(int i=0; i<divisors.size(); i++)
        {
            int score=0;
            for(int j=0; j<nums.size(); j++)
            {
                if(nums[j]%divisors[i]==0)
                {
                    score++;
                }
            }
            if(score > maxscore || score==maxscore && divisors[i]<ans)
            {
                maxscore=score;
                ans=divisors[i];
            }
        }
        return ans;
    }
};