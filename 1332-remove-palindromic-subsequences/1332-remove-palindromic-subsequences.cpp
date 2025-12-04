class Solution 
{
public:
    int removePalindromeSub(string s) 
    {
        if(s.length()==0)
          return 0;


        int flag=0;
        for(int i=0; i<(s.length()/2); i++)
        {
            if(s[i]!=s[s.length()-1-i])
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
           return 1;
        

        return 2;
    }
};