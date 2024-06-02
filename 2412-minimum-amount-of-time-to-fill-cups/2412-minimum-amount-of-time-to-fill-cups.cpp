class Solution 
{
public:
    int fillCups(vector<int>& amount) 
    {
        int time=0; 
        priority_queue<int> pq(amount.begin(), amount.end());

        while(pq.top() > 0)
        {
            int a=pq.top();
            pq.pop();   
            int b=pq.top();
            pq.pop();

            a--;
            b--;
            
            pq.push(a);
            pq.push(b);

            time++;
        }
        return time;
    }
};