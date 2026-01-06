class Solution 
{
public:
    bool digitCount(string num) 
    {
        map<int, int> m;
        for(int i=0; i<num.length(); i++)
        {
            m[num[i]-'0']++;
        }

        bool flag=true;
        for(int i=0; i<num.length(); i++)
        {
            if((num[i]-'0')!=m[i])
            {
                flag=false;
                break;
            }
        }
        return flag;
    }
};