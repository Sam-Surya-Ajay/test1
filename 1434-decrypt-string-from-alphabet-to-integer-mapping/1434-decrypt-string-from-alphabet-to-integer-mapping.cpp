class Solution 
{
public:
    string freqAlphabets(string s) 
    {
        string ans="";

        for(int i=s.length()-1; i>=0; i--)
        {
            if(s[i]!='#')
            {
                int temp=(s[i]-'1');
                char c='a'+temp;
                ans=c + ans;
            }
            else
            {
                int temp=((s[i-2]-'0')*10+(s[i-1]-'0'));
                char c='a'+temp-1;
                ans=c + ans;
                i-=2;
            }
        }
        return ans;
    }
};