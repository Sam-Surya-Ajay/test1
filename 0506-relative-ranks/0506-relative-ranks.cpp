class Solution 
{
public:
    vector<string> findRelativeRanks(vector<int>& score) 
    {
        vector<string> ans(score.size(), "0");
        
        vector<int> temp=score;
        sort(temp.begin(), temp.end(), greater<int>());
        
        for(int i=0; i<temp.size(); i++)
        {
            for(int j=0; j<score.size(); j++)
            {
                if(temp[i]==score[j])
                {
                    ans[j]=to_string(i+1);
                    if(i==0)
                       ans[j]="Gold Medal";
                    else if(i==1)
                       ans[j]="Silver Medal";
                    else if(i==2)
                       ans[j]="Bronze Medal";
                    break;
                }
            }
        }

        return ans;
    }
};