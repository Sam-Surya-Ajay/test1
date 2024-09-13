class Solution 
{
public:
    vector<vector<int>> imageSmoother(vector<vector<int>>& img) 
    {
        vector<vector<int>> ans(img.size(), vector<int>(img[0].size(),0));
        
        for(int i=0; i<img.size(); i++)
        {
            for(int j=0; j<img[0].size(); j++)
            {
                long long sum=0;
                int count=0;
                for(int dr=-1; dr<=1; dr++)
                {
                    for(int dc=-1; dc<=1; dc++)
                    {
                        int r=i+dr, c=j+dc;
                        if((r>=0 && r<img.size()) && (c>=0 && c<img[0].size()))
                        {
                            sum+=img[r][c];
                            count++;
                        }
                    }
                }
                ans[i][j]=(sum/count);
            }
        }
       
        return ans;
    }
};