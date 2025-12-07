class Solution 
{
public:
    string removeTrailingZeros(string num) 
    {
        int index=num.length();
        while(num[index-1]=='0')
        {
            index--;
        }

        string ans="";
        for(int i=0; i<index; i++)
        {
            ans+=num[i];
        }
        return ans;
    }
};