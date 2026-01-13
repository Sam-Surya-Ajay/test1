class Solution 
{
public:
    string greatestLetter(string s) 
    {
        vector<int> lowercase(26, 0), uppercase(26, 0);
        
        for(int i=0; i<s.length(); i++)
        {
            if(s[i]>='a' && s[i]<='z')
            {
                lowercase[s[i]-'a']=1;
            }
            else if(s[i]>='A' && s[i]<='Z')
            {
                uppercase[s[i]-'A']=1;
            }
        }

        for(int i=25; i>=0; i--)
        {
            if(lowercase[i]==1 && uppercase[i]==1)
            {
                return string(1, 'A' + i);
            }
        }

        return "";
    }
};