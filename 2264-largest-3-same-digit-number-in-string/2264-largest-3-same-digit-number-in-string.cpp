class Solution 
{
public:
    string largestGoodInteger(string num) 
    {
        string ans="";
        
        int n=-1;
        for(int i=0; i<num.length()-2; i++)
        {
            if(num[i]==num[i+1] && num[i+1]==num[i+2] && num[i]==num[i+2])
            {
                int temp=((num[i]-'0')*100) + ((num[i]-'0')*10) + (num[i]-'0');
                if(temp>n)
                {
                    n=temp;
                    ans="";
                    ans+=num[i];
                    ans+=num[i];
                    ans+=num[i];
                }
            }
        }

        return ans;
    }
};