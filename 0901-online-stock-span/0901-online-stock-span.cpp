class StockSpanner 
{
public:
    stack<pair<int, int>> st;
    StockSpanner() 
    {
        
    }
    
    int next(int price) 
    {
        if(st.empty())
        {
            st.push({price, 1});
            return 1;
        }
        else
        {
            auto p=st.top();
            int temp=1;
            while(p.first<=price)
            {
                temp+=p.second;
                st.pop();
                if(st.empty())
                   break;
                p=st.top();  
            }
            st.push({price, temp});
            return temp;
        }
        return 0;
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */