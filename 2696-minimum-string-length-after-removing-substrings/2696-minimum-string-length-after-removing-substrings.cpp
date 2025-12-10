class Solution 
{
public:
    int minLength(string s) 
    {
        bool check=true;
        while(check==true)
        {
            if(s.find("AB")!=string::npos || s.find("CD")!=string::npos)
            {
                for(int i=0; i<s.length()-1; i++)
                {
                    if(s[i]=='A' && s[i+1]=='B')
                    {
                        s.erase(i, 2);
                        break;
                    }
                    else if(s[i]=='C' && s[i+1]=='D')
                    {
                        s.erase(i, 2);
                        break;
                    }
                }
            }
            else
            {
                check=false;
            }
        }
        return s.length();
    }
};