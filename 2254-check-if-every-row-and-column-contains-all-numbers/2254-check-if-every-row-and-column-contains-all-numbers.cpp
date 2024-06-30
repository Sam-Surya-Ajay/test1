class Solution 
{
public:
    bool checkValid(vector<vector<int>>& matrix) 
    {
        for(int i=0; i<matrix.size(); i++)
        {
            set<int> row, col;
            for(int j=0; j<matrix.size(); j++)
            {
                row.insert(matrix[i][j]);
                col.insert(matrix[j][i]);
            }
            if(row.size()!=matrix.size() || col.size()!=matrix.size())
               return false;
        }
        return true;
    }
};