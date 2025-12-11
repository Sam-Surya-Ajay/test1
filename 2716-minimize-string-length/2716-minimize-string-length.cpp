class Solution 
{
public:
    int minimizedStringLength(string s) 
    {
        vector<int> temp(26, 0);

        for(int i=0; i<s.length(); i++)
        {
            temp[s[i]-'a']=1;
        }

        int ans=0;
        for(int i=0; i<26; i++)
        {
            if(temp[i]==1)
              ans++;
        }

        return ans;
    }
};