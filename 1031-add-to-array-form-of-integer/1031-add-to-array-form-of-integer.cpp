class Solution 
{
public:
    vector<int> addToArrayForm(vector<int>& num, int k) 
    {
        vector<int> ans;
        for(int i=num.size()-1; i>=0; i--)
        {
            k+=num[i];
            ans.insert(ans.begin(), k%10);
            k/=10;
        }
        while(k>0)
        {
            ans.insert(ans.begin(), k%10);
            k/=10;
        }
        return ans;
    }
};