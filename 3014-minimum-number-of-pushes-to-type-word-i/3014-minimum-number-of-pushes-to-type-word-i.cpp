class Solution 
{
public:
    int minimumPushes(string word) 
    {        
        int temp1=word.length()/8, temp2=word.length()%8, ans=0;
          
        for(int i=1; i<=temp1; i++)
        {
            ans+=(8*i);
        }

        ans+=(temp2*(temp1+1));

        return ans;
    }
};