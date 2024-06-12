class Solution 
{
public:
    int findShortestSubArray(vector<int>& nums) 
    {
       map<int,int> m;
       int maxifreq=INT_MIN;
       for(int i=0; i<nums.size(); i++)
       {
           m[nums[i]]++;
           if(maxifreq < m[nums[i]])
           {
              maxifreq=m[nums[i]];
           }
       } 

       set<int> s;
       for(int i=0; i<nums.size(); i++)
       {
          if(m[nums[i]] == maxifreq)
          {
              s.insert(nums[i]);
          }
       }
       
       map<int, int> startind;
       map<int, int> endind;
       for(auto it:s)
       {
           for(int j=0; j<nums.size(); j++)
           {
              if(it==nums[j])
              {
                startind[nums[j]]=j;
                break;
              }
           }

           for(int j=nums.size()-1; j>=0; j--)
           {
              if(it==nums[j])
              {
                endind[nums[j]]=j;
                break;
              }
           }
       }
       int ans=INT_MAX;
       for(auto it:s)
       {
            ans=min(ans,endind[it] - startind[it]+1);
       }
       return ans;
    }
};