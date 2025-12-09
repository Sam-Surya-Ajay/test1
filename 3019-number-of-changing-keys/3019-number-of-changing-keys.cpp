class Solution 
{
public:
    int countKeyChanges(string s) 
    {
        int ans=0;

        for(int i=0; i<s.length(); i++)
        {
            if(s[i]>='A' && s[i]<='Z')
            {
                s[i]=(s[i]-'A')+'a';
            }
        }
        for(int i=1; i<s.length(); i++)
        {
            if(s[i-1]!=s[i])
               ans++;
        }

        return ans;
    }
};