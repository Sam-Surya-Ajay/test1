class Solution 
{
public:
    int totalNumbers(vector<int>& digits) 
    {
       set<int> s;
       int n=digits.size(); 

       for(int i=0; i<n; i++)
       {
           for(int j=0; j<n; j++)
           {
               for(int k=0; k<n; k++)
               {
                   if(i!=j && i!=k && j!=k)
                   {
                       if(digits[i]!=0)
                       {
                           int num=digits[i]*100 + digits[j]*10 + digits[k];
                           if(num%2==0)
                           {
                              s.insert(num);
                           }
                       }
                   }
               }
           }
       }


       return s.size();
    }
};