class Solution 
{
public:
    void rotate(vector<vector<int>>& matrix) 
    {
        vector<vector<int>> temp=matrix;
        
        for(int i=0; i<temp.size(); i++)
        {
            for(int j=0; j<temp.size(); j++)
            {
                matrix[j][matrix.size()-1-i]=temp[i][j];    
            }
        }
    }
};