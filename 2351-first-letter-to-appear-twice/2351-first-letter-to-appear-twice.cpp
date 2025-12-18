class Solution 
{
public:
    char repeatedCharacter(string s) 
    {
        map<char, int> temp;
        for(int i=0; i<s.length(); i++)
        {
            temp[s[i]]++;
            if(temp[s[i]]==2)
               return s[i];
        }
        return s[0];
    }
};