class Solution 
{
public:
    bool squareIsWhite(string coordinates) 
    {
        int i=coordinates[0]-'a'+1, j=coordinates[1]-'0';
        if(j%2==1)
        {
            if(i%2==0)
              return true;
        }     
        else
        {
            if(i%2==1)
              return true;
        }           
        return false;
    }
};