class Solution 
{
public:
    bool isAlienSorted(vector<string>& words, string order) 
    {
        map<char, int> m;
        for(int i=0; i<order.size(); i++)
        {
            m[order[i]]=i;
        }

        vector<string> temp=words;
        
        sort(words.begin(), words.end(), [&](string s1, string s2)
        {
            int i=0, j=0;
            while(i<s1.size() && j<s2.size())
            {
                if(m[s1[i]] < m[s2[i]])
                   return true;
                else if(m[s1[i]] > m[s2[i]])
                   return false;
                i++;
                j++;
            }
            return s1.size()<s2.size();
        }
        );

        return words==temp;
    }
};