class Solution 
{
public:
    int maxFreqSum(string s) 
    {
        vector<int> temp(26, 0);

        for(int i=0; i<s.length(); i++)
        {
            temp[s[i]-'a']++;
        }

        int vowel=0, consonant=0;
        for(int i=0; i<26; i++)
        {
            if('a'+i=='a' || 'a'+i=='e' || 'a'+i=='i' || 'a'+i=='o' || 'a'+i=='u')
            {
                if(temp[i]>vowel)
                {
                    vowel=temp[i];
                }
            }
            else
            {
                if(temp[i]>consonant)
                {
                    consonant=temp[i];
                }
            }
        }
        return vowel+consonant;
    }
};