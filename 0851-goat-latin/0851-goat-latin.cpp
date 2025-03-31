class Solution 
{
public:
    string toGoatLatin(string s) 
    {
        string ans="";
        int n=s.size(), j, ind=1;
        for(int i=0; i<s.size(); i++)
        {
            j=i;
            if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U')
            {
                while(j<n && s[j]!=' ')
                {
                    ans+=s[j];
                    j++;
                }
            }
            else
            {
                j++;
                while(j<n && s[j]!=' ')
                {
                    ans+=s[j];
                    j++;
                }
                ans+=s[i];
            }
            ans+="ma";
            ans.append(ind, 'a');
            ind++;
            if(j<n)
            {
                ans+=' ';
            }
            i=j;
        }
        return ans;
    }
};