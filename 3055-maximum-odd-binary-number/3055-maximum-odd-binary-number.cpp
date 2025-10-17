class Solution 
{
public:
    string maximumOddBinaryNumber(string s) 
    {
        string ans="";
        int count=0;

        for(int i=0; i<s.length(); i++)
        {
            if((s[i]-'0')==1)
                count++;
            ans+='0';
        }
        ans[s.length()-1]='1';
        count--;

        int i=0; 
        while(count>0)
        {
            ans[i]='1';
            count--;
            i++;
        }
        return ans;
    }
};