class Solution 
{
public:
    int minimumChairs(string s) 
    {
        int temp=0, maxi=0;
        for(int i=0; i<s.length(); i++)
        {
            if(s[i]=='E')
               temp++;
            else 
               temp--;
            maxi=max(maxi, temp);
        }
        return maxi;
    }
};