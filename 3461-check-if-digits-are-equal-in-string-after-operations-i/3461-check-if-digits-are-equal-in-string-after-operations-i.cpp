class Solution 
{
public:
    bool hasSameDigits(string s) 
    {
        while(s.length()!=2)
        {
            string ans="";
            for(int i=0; i<s.length()-1; i++)
            {
                int a=s[i]-'0', b=s[i+1]-'0';
                int res=(a+b)%10;
                ans+=to_string(res);
            }
            s=ans;
        }
        if(s[0]==s[1])
          return true;
        return false;
    }
};