class Solution 
{
public:
    string reverseOnlyLetters(string s) 
    {
        string temp="";
        for(int i=0; i<s.length(); i++)
        {
            if((s[i]>='A' && s[i]<='Z') || (s[i]>='a' && s[i]<='z'))
            {
                temp+=s[i];
            }
        }
        
        reverse(temp.begin(), temp.end());
        int j=0;
        string ans="";
        for(int i=0; i<s.length(); i++)
        {
            if((s[i]>='A' && s[i]<='Z') || (s[i]>='a' && s[i]<='z'))
            {
                ans+=temp[j];
                j++;
            }
            else
            {
                ans+=s[i];
            }
        }
        return ans;
    }
};