class Solution 
{
public:
    int minimumSum(int num) 
    {
        vector<int> temp;
        int a;
        
        while(num!=0)
        {
            a = num%10;
            num /= 10;
            temp.push_back(a);
        }
        sort(temp.begin(), temp.end());
        
        int n1=temp[0]*10 + temp[2];
        int n2=temp[1]*10 + temp[3];
        return n1+n2;
    }
};