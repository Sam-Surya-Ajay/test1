class Solution 
{
public:
    string tobinary(int num)
    {
        string binary;
        while (num) 
        {
            binary = to_string(num % 2) + binary;
            num /= 2;
        }
        return binary; 
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