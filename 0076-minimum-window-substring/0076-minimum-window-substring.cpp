class Solution 
{
public:
    string minWindow(string s, string t) 
    {
        string ans="";
        int len=INT_MAX;

        unordered_map<char, int> required, formed;
        for(int i=0; i<t.length(); i++)
        {
            required[t[i]]++;
        }
        
        int l=0, scount=0;
        for(int r=0; r<s.length(); r++)
        {
            if(required.count(s[r]))
            {
                formed[s[r]]++;
                if(formed[s[r]]==required[s[r]])
                {
                    scount++;
                }
            }
            if(required.size()==scount)
            {
                while(l<=r)
                {
                    if(!required.count(s[l]))
                    {
                        l++;
                    }
                    else if(formed[s[l]]>required[s[l]])
                    {
                        formed[s[l]]--;
                        l++;
                    }
                    else
                        break;
                }
                if((s.substr(l,r-l+1)).length()<len)
                { 
                    ans=s.substr(l,r-l+1);
                    len=ans.length();
                }
            }
        }
        return ans;
    }
};