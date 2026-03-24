class Solution 
{
public:
    string trimTrailingVowels(string s) 
    {
        int end=s.length()-1;
        while(end>=0 && (s[end]=='a' || s[end]=='e' || s[end]=='i' || s[end]=='o' || s[end]=='u'))
        {
            end--;
        }

        string ans="";
        for(int i=0; i<=end; i++)
        {
            ans+=s[i];
        }
        return ans;
    }
};