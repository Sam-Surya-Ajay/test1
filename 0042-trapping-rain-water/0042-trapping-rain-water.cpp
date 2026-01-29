class Solution 
{
public:
    int trap(vector<int>& height) 
    {
        int ans=0, l=0, r=height.size()-1, lmax=height[0], rmax=height[height.size()-1];


        while(l<r)
        {
            if(height[l] < height[r])
            {
                lmax=max(lmax, height[l]);
                ans+=lmax-height[l];
                l++;
            }
            else
            {
                rmax=max(rmax, height[r]);
                ans+=rmax-height[r];
                r--;
            }

        }
        return ans;
    }
};