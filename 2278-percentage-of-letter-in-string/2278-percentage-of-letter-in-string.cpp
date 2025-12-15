class Solution 
{
public:
    int percentageLetter(string s, char letter) 
    {
        int temp=0;
        for(int i=0; i<s.length(); i++)
        {
            if(s[i]==letter)
               temp++;
        }
        return (temp*100)/s.length();
    }
};