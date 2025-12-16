class Solution 
{
public:
    string makeFancyString(string s) 
    {
        string ans="";
        for(int i=0; i<s.length(); i++)
        {
            if(ans.length()>=2 && ans[ans.length()-1]==s[i] && ans[ans.length()-2]==s[i])
               continue;
            ans+=s[i];
        }
        return ans;
    }
};