class Solution 
{
public:
    vector<string> generateParenthesis(int n) 
    {
        vector<string> ans;

        temp(0,0,"",ans,n);    

        return ans;
    }

    void temp(int open, int close, string s, vector<string>& ans, int n)
    {
        if(open == close && open+close == n*2)
        {
            ans.push_back(s);
            return;
        }

        if(open < n)
        {
            temp(open+1, close, s+"(", ans, n);
        }

        if(close < open)
        {
            temp(open, close+1, s+")", ans, n);
        }
    }
};