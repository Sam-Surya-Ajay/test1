class Solution 
{
public:
    int lengthOfLongestSubstring(string s) 
    {
        int ans=0, l=0, r=0;
        
        unordered_map<char, int> m;
        for(int i=0; i<s.length(); i++)
        {
           if(m.find(s[i]) == m.end())
           {
              m[s[i]]=1;
           }
           else
           {
              while(m.find(s[i]) != m.end())
              {
                m.erase(s[l]);
                l++;
              }
              m[s[i]]=1;
           }
           ans=max(ans, (int)m.size());
        }
        return ans;
    }
};