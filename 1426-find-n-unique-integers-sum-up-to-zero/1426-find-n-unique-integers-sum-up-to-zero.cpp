class Solution 
{
public:
    vector<int> sumZero(int n) 
    {
        vector<int> ans(n, 0);
        
        int num=1;

        if(n%2 != 0)
        {
           for(int i=1; i<ans.size(); i+=2)
           {
               ans[i]=0-num;
               ans[i+1]=num;
               num++;
           }
        }
        else
        {
           for(int i=0; i<ans.size(); i+=2)
           {
               ans[i]=0-num;
               ans[i+1]=num;
               num++;
           }
        }

        return ans;
    }
};