class Solution 
{
public:
    int gcdt(int x, int y)
    {
        while(y!=0)
        {
            int temp=y;
            y=x%y;
            x=temp;
        }
        return x;
    }
    int countBeautifulPairs(vector<int>& nums) 
    {
        int ans=0;
        
        for(int i=0; i<nums.size()-1; i++)
        {
            for(int j=i+1; j<nums.size(); j++)
            {
                int firstdigit=to_string(nums[i])[0] - '0';
                int lastdigit=nums[j]%10;

                if(gcdt(firstdigit, lastdigit)==1)
                    ans++;
            }
        }

        return ans;
    }
};