class Solution 
{
public:
    bool check(vector<int>& nums) 
    {
        vector<int> temp=nums;
        
        int x=0; 
        while (x<nums.size())
        {
            vector<int> temp2(nums.size(),0);
            sort(temp.begin(), temp.end());
            
            for(int i=0; i<nums.size(); i++)
            {
                temp2[i]=temp[(i+x) % nums.size()];
            }

            if(temp2==nums)
              return true;
            x++;
        }
        return false;
    }
};