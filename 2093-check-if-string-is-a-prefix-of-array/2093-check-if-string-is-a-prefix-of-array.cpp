class Solution 
{
public:
    bool isPrefixString(string s, vector<string>& words) 
    {
        string temp="";
        for(int i=0; i<words.size(); i++)
        {
            temp += words[i];

            if(s==temp)
               return true;
            
            if(temp.size() > s.size())
               return false;
        }
        return false;
    }
};