class Solution 
{
public:
    bool areNumbersAscending(string s) 
    {
        int last=-1;
        for(int i=0; i<s.length(); i++)
        {
            if(s[i]>='0' && s[i]<='9')
            {
                string temp="";
                temp += s[i];
                while(s[i+1]>='0' && s[i+1]<='9')
                {
                    i++;
                    temp += s[i];
                }
                
                int num=stoi(temp);
                if(num > last)
                {
                   last=num;
                }
                else
                {
                   return false;
                }
            }
        }
        return true;
    }
};