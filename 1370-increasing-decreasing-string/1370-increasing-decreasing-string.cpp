class Solution 
{
public:
    int check(vector<int>& count)
    {
        for(int i=0; i<count.size(); i++)
        {
            if(count[i]>0)
                return 0;
        }
        return 1;
    }
    
    void forward(vector<int>& count, string& ans)
    {
        for(int i=0; i<count.size(); i++)
        {
            if(count[i])
            {
               count[i]--;
               ans += ('a'+i); 
            }  
        }
    }

    void backward(vector<int>& count, string& ans)
    {
        for(int i=25; i>=0; i--)
        {
            if(count[i])
            {
               count[i]--;
               ans += ('a'+i); 
            }   
        }
    }

    string sortString(string s) 
    {
        vector<int> count(26, 0);
        string ans="";

        for(int i=0; i<s.length(); i++)
        {
            count[s[i]-'a']++;
        }

        int temp=0;
        while(temp==0)
        {
            temp=check(count);
            forward(count, ans);
            backward(count, ans);
        }
        return ans;
    }
};