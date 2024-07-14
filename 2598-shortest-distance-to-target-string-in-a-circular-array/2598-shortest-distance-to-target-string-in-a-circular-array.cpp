class Solution 
{
public:
    int closetTarget(vector<string>& words, string target, int startIndex) 
    {
        if(words[startIndex]==target)
           return 0;
        
        int ans=INT_MAX;
        int found=0;
        int currind1= (startIndex + 1 == words.size())? 0 : startIndex + 1, count1=1;
        while(currind1!=startIndex)
        {
            if(words[currind1]==target)
            {
               found=1;
               break;
            }            
            currind1=(currind1+1)%words.size();
            count1++;
        }
        if(found==1)
           ans=count1;

        found=0;
        int currind2= (startIndex - 1 < 0)? words.size()-1 : startIndex - 1, count2=1;
        while(currind2!=startIndex)
        {
            if(words[currind2]==target)
            {
               found=1;
               break;
            }   
            currind2=(currind2-1 + words.size())%words.size();
            count2++;
        }
        if(found==1)
           ans=min(ans,count2);

        return ans!=INT_MAX ? ans : -1;
    }
};