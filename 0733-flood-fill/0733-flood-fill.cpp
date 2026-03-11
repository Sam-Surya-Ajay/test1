class Solution 
{
public:
    void dfs(vector<vector<int>>& image, int i, int j, int temp, int color)
    {
        if(i<0 || j<0 || i>=image.size() || j>=image[0].size() || image[i][j]!=temp)
           return;
        
        image[i][j]=color;

        dfs(image, i+1, j, temp, color);
        dfs(image, i-1, j, temp, color);
        dfs(image, i, j+1, temp, color);
        dfs(image, i, j-1, temp, color);

        return;
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) 
    {
        if(image[sr][sc]==color)
           return image;
        dfs(image, sr, sc, image[sr][sc], color);
        return image;
    }
};