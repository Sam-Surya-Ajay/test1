class Solution 
{
public:
    int minDeletion(string s, int k) 
    {
        map<int, int> m;
        for(int i=0; i<s.length(); i++)
        {
            m[s[i]]++;
        }
        
        vector<int> temp;
        for(auto it:m)
        {
            temp.push_back(it.second);
        }
        sort(temp.begin(), temp.end());


        int ans=0;
        if((int)temp.size()-k > 0)
        {
            for(int i=0; i<((int)temp.size()-k); i++)
            {
                ans+=temp[i];
            }
            return ans;
        }
        return 0;
    }
};