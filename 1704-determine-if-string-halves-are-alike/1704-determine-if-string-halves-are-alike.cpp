class Solution 
{
public:
    bool halvesAreAlike(string s) 
    {
        string a=s.substr(0, s.length()/2), b=s.substr((s.length()/2), s.length());
        string vowels="aeiouAEIOU";
        int count=0;
    
        for(int i=0; i<a.length(); i++)
        {
            if(vowels.find(a[i]) != string::npos)
               count++;
        }

        for(int i=0; i<b.length(); i++)
        {
            if(vowels.find(b[i]) != string::npos)
               count--;
        }

        return count==0;
    }
};