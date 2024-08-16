class OrderedStream 
{
public:
    vector<string> temp;
    int i=0;
    OrderedStream(int n) 
    {
        for(int i=0; i<n; i++)
        {
            temp.push_back("0");
        }
    }
    
    vector<string> insert(int idKey, string value) 
    {
        temp[idKey-1]=value;

        vector<string> ans;
        while(i<temp.size() && temp[i]!="0")
        {
            ans.push_back(temp[i]);
            i++;
        }
        return ans;
    }
};

/**
 * Your OrderedStream object will be instantiated and called as such:
 * OrderedStream* obj = new OrderedStream(n);
 * vector<string> param_1 = obj->insert(idKey,value);
 */