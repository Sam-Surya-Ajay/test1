class Solution 
{
public:
    bool areOccurrencesEqual(string s) 
    {
        map<char, int> m;
        for(int i=0; i<s.length(); i++)
        {
            m[s[i]]++;
        }
        int a=m[s[0]];
        
        for(auto x:m)
        {
            if(x.second != a)
               return false;
        }
        return true;
    }
};