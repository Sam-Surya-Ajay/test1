class Solution 
{
public:
    int largestRectangleArea(vector<int>& heights) 
    {
        int ans=heights[0];
        heights.push_back(0);

        stack<int> st;
        for(int i=0; i<heights.size(); i++)
        {
            while(!st.empty() && heights[st.top()] > heights[i])
            {
                int h=heights[st.top()], w;
                st.pop();

                if(st.empty())
                  w=i;
                else
                  w=i-st.top()-1;

                ans=max(ans, h*w);
            }
            st.push(i);
        }

        return ans;
    }
};