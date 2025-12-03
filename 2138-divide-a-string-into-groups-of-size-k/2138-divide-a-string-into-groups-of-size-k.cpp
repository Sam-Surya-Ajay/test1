class Solution 
{
public:
    vector<string> divideString(string s, int k, char fill) 
    {
        vector<string> ans;
        
        string temp="";
        for(int i=0; i<s.length(); i++)
        {
            temp+=s[i];
            if(temp.length()==k)
            {
                ans.push_back(temp);
                temp="";
            }
        }
        while(temp.length()!=0 && temp.length()!=k)
        {
            temp+=fill;
            if(temp.length()==k)
            {
                ans.push_back(temp);
                return ans;
            }
        }
        return ans;
    }
};