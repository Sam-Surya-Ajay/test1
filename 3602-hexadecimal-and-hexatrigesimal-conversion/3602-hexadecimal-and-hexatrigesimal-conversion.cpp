class Solution 
{
public:
    string tobase(int n, int base)
    {
        if(n==0)
           return "0";
        
        string s="";
        while(n>0)
        {
            int x = n%base;
            if(x<10)
              s+=char('0' + x);
            else
              s+=char('A' + (x-10));
            n/=base;
        }
        reverse(s.begin(), s.end());
        return s;
    }
    string concatHex36(int n) 
    {
        int sq=n*n;
        int cube=sq*n;

        string dec=tobase(sq, 16);
        string tri=tobase(cube, 36);

        return dec + tri;
    }
};