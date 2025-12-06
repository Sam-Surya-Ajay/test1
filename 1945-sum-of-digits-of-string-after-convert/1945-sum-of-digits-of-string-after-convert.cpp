class Solution 
{
public:
    int getLucky(string s, int k) 
    {
        int ans=0;

        string temp="";
        for(int i=0; i<s.length(); i++)
        {
            temp+=to_string(s[i]-'a'+1);
        }
        
        do
        {
            ans=0;
            for(int i=0; i<temp.length(); i++)
            {
                ans+=(temp[i]-'0');
            }
            temp=to_string(ans);
            k--;
        }while(k>0);

        return ans;
    }
};