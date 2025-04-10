class Solution 
{
public:
    int firstUniqChar(string s) 
    {
        vector<int> count(26);
        for(int i=0; i<s.size(); i++)
        {
            count[s[i]-97]++;
        }
        for(int i=0; i<s.size(); i++)
        {
            if(count[s[i]-97]==1)
               return i;
        }
        return -1;
    }
};