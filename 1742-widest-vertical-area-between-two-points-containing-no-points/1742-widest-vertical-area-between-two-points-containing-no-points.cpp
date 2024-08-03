class Solution 
{
public:
    bool cmp(vector<int> p1, vector<int> p2)
    {
        return p1[0]<p2[0];
    }
    int maxWidthOfVerticalArea(vector<vector<int>>& points) 
    {
        int ans=0;
        sort(points.begin(), points.end());
        for(int i=0; i<points.size()-1; i++)
        {
            if(points[i][0]<points[i+1][0])
            {
                ans=max(ans,points[i+1][0]-points[i][0]);
            }
        }
        return ans;
    }
};