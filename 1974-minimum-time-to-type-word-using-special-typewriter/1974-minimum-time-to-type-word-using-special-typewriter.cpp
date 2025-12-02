class Solution 
{
public:
    int minTimeToType(string word) 
    {
        int ans=0;
        char pointer='a';

        for(int i=0; i<word.size(); i++)
        {
            ans+=min(abs(pointer-word[i]), min(abs(word[i]-'z')+(pointer-'a'+1), abs(pointer-'z')+(word[i]-'a'+1)));
            
            ans++;

            pointer=word[i];
        }
        return ans;
    }
};