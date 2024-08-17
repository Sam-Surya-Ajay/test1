class Solution 
{
public:
    int countTriplets(vector<int>& arr) 
    {
        int ans=0; 
        vector<int> prefix(arr.size()+1, 0);
        for(int i=0; i<arr.size(); i++)
        {
            prefix[i+1]=prefix[i]^arr[i];
        }

        for(int i=0; i<arr.size()-1; i++)
        {
            for(int k=i+1; k<arr.size(); k++)
            {
                if(prefix[i]==prefix[k+1])
                   ans+=(k-i);
            }
        }
        return ans;
    }
};