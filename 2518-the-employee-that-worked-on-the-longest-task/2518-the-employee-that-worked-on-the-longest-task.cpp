class Solution 
{
public:
    int hardestWorker(int n, vector<vector<int>>& logs) 
    {
        map<int,int> m;
        for(int i=0; i<logs.size(); i++)
        {
            int temp;
            if(i==0)
            {
                temp=logs[i][1];
            }
            else
            {
                temp=logs[i][1]-logs[i-1][1];
            }

            if(m[logs[i][0]]<temp)
            {
                m[logs[i][0]]=temp;
            }
        }

        int maxi=INT_MIN, ans;
        for(auto it:m)
        {
            if(it.second>maxi)
            {
                maxi=it.second;
                ans=it.first;
            }
        }
        return ans;
    }
};