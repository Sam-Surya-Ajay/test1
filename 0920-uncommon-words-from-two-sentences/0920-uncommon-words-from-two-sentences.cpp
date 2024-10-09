class Solution 
{
public:
    vector<string> uncommonFromSentences(string s1, string s2) 
    {
        vector<string> ans;
        map<string, int> m;
        
        int start=0;
        for(int i=0; i<s1.size(); i++)
        {
            if(s1[i]==' ')
            {
                string sub=s1.substr(start, i-start);
                m[sub]++;
                start=i+1;
            }
        }
        string sub=s1.substr(start, s1.size()-start);
        m[sub]++;

        start=0;
        for(int i=0; i<s2.size(); i++)
        {
            if(s2[i]==' ')
            {
                string sub=s2.substr(start, i-start);
                m[sub]++;
                start=i+1;
            }
        }
        sub=s2.substr(start, s2.size()-start);
        m[sub]++;
        
        for(auto it:m)
        {
            if(it.second==1)
            {
                ans.push_back(it.first);
            }
        }
        return ans;
    }
};