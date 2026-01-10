class Solution 
{
public:
    int countVowelSubstrings(string word) 
    {
        int ans=0;

        for(int i=0; i<word.length(); i++)
        {
            set<int> s;
            for(int j=i; j<word.length(); j++)
            {
                if(word[j]!='a' && word[j]!='e' && word[j]!='i' && word[j]!='o' && word[j]!='u')
                {
                    break;
                }
                s.insert(word[j]);
                if(s.size()==5)
                {
                    ans++;
                }
            }
        }

        return ans;
    }
};