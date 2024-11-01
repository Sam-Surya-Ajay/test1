class Solution 
{
public:
    string tobinary(int num)
    {
        string binary;
        while (num > 0) 
        {
            binary = (num % 2 == 0 ? "0" : "1") + binary;
            num /= 2;
        }
        return binary.empty() ? "0" : binary; 
    }
    
    string convertDateToBinary(string date) 
    {
       string ans, s;
       for(int i=0; i<date.size(); i++)
       {
           if(date[i]=='-')
           {
               int num=stoi(s);
               ans+=tobinary(num);
               ans+='-';
               s="";
           }
           else
           {
               s+=date[i];
           }
       } 
       int num=stoi(s);
       ans+=tobinary(num);

       return ans;
    }
};