class Solution 
{
public:
    string clearDigits(string s) 
    {
        vector<int> temp(s.length(), 0);
        for(int i=0; i<s.length(); i++)
        {
            if(s[i]>='0' && s[i]<='9')
            {
                temp[i]=1;
                for(int j=i; j>=0; j--)
                {
                    if(temp[j]==0)
                    {
                        if(s[j]>='a' && s[j]<='z')
                        {
                           temp[j]=1;
                           break;
                        }
                    }
                }
            }
        }
        string ans="";
        for(int i=0; i<temp.size(); i++)
        {
            if(temp[i]==0)
            {
                ans+=s[i];
            }
        }
        return ans;
    }
};