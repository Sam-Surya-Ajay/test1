class Solution 
{
public:
    static int num;
    static bool cmp(vector<int> a, vector<int> b)
    {
        return a[num]>b[num];
    }
    vector<vector<int>> sortTheStudents(vector<vector<int>>& score, int k) 
    {
        num=k;
        sort(score.begin(), score.end(),cmp);
        return score;
    }
};

int Solution::num = 0;