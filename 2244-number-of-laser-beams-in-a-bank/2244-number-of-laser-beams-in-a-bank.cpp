class Solution 
{
public:
    int numberOfBeams(vector<string>& bank) 
    {
        int ans=0;
        for(int i=0; i<bank.size()-1; i++)
        {
            for(int a=0; a<bank[i].size(); a++)
            {
                if(bank[i][a]=='1')
                {
                    int flag=0;
                    for(int j=i+1; j<bank.size(); j++)
                    {
                        if(flag==1)
                          break;
                        for(int b=0; b<bank[j].size(); b++)
                        {
                            if(bank[j][b]=='1')
                            {
                                ans++;
                                flag=1;
                            }
                        }
                    }
                }
            }
        }
        return ans;
    }
};