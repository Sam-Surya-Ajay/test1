class Solution 
{
public:
    int getLeastFrequentDigit(int n) 
    {
        map<int, int> m;
        while(n!=0)
        {
            int temp=n%10;
            n/=10;
            m[temp]++;
        }

        int num=INT_MAX, count=INT_MAX;
        for(auto it:m)
        {
            if(it.second<count)
            {
                num=it.first;
                count=it.second;
            }
            else if(it.second==count && it.first<num)
            {
                num=it.first;   
            }
        }
        return num;
    }
};