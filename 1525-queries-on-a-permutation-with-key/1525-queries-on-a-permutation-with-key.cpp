class Solution 
{
public:
    vector<int> processQueries(vector<int>& queries, int m) 
    {
        vector<int> P;
        for(int i=1; i<=m; i++)
        {
            P.push_back(i);
        }

        vector<int> ans;
        
        for(int i=0; i<queries.size(); i++)
        {
            for(int j=0; j<P.size(); j++)
            {
                if(queries[i]==P[j])
                {
                    ans.push_back(j);
                    P.erase(P.begin()+j);
                    P.insert(P.begin(),queries[i]);
                }
            }
        }

        return ans;
    }
};