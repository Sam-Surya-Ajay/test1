class Solution 
{
public:
    int minimumFlips(int n) 
    {
        string n1="", n2="";
        
        if(n==0)
           n1="0";

        while(n>0)
        {
            n1=char('0' + (n%2)) + n1;
            n/=2;
        }
        
        n2=n1;
        for(int i=0; i<n2.length()/2; i++)
        {
            char temp=n2[i];
            n2[i]=n2[n2.length()-1-i];
            n2[n2.length()-1-i]=temp;
        }

        int ans=0;
        for(int i=0; i<n1.length(); i++)
        {
            if(n1[i] != n2[i])
            {
                ans++;
            }
        }
        return ans;
    }
};