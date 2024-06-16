class Solution 
{
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) 
    {
        map<string,int> m;
        for(int i=0; i<list1.size(); i++)
        {
            for(int j=0; j<list2.size(); j++)
            {
                if(list1[i]==list2[j])
                   m[list1[i]]=i+j;
            }
        }

        int mini=INT_MAX;
        for(auto it:m)
        {
            if(it.second < mini)
            {
                mini=it.second;
            }
        }
        
        vector<string> ans;
        for(auto it:m)
        {
            if(it.second == mini)
            {
                ans.push_back(it.first);
            }
        }
        return ans;
    }
};