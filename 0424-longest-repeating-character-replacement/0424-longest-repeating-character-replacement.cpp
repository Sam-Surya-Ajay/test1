class Solution 
{
public:
    int characterReplacement(string s, int k) 
    {
        int ans=0, l=0;
        
        unordered_map<int, int> m;
        for(int r=0; r<s.length(); r++)
        {
            m[s[r]]++;
        
            int maxchar=0;
            for(auto it:m)
            {
                if(it.second>maxchar)
                {
                    maxchar=it.second;
                }
            }
            
            while((r-l+1)-maxchar > k)
            {
                m[s[l]]--;
                l++;

                for(auto it:m)
                {
                   if(it.second>maxchar)
                   {
                       maxchar=it.second;
                   }
                }
            }
            ans=max(ans, r-l+1);
        }

        return ans;
    }
};