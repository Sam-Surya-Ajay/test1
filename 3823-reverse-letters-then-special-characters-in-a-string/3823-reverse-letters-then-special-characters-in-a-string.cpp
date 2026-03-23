class Solution 
{
public:
    string reverseByType(string s) 
    {
        string ans="";
        int temp1=s.length()-1, temp2=s.length()-1;
        
        for(int i=0; i<s.length(); i++)
        {
            if(s[i]>='a' && s[i]<='z')
            {
                while(s[temp1]<'a' || s[temp1]>'z')
                   temp1--;
                ans+=s[temp1--];
            }
            else
            {
                while(s[temp2]>='a' && s[temp2]<='z')
                   temp2--;
                ans+=s[temp2--];
            }
        }
        return ans;
    }
};