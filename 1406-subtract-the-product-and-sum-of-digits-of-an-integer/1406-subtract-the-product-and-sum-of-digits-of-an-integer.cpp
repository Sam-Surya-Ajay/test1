class Solution 
{
public:
    int subtractProductAndSum(int n) 
    {
        int sum=0, prod=1, a;
        while(n > 0)
        {
            a = n%10;
            n /= 10;

            sum += a;
            prod *= a;
        }
        return prod-sum;
    }
};