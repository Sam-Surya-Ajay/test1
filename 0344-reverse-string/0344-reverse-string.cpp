class Solution 
{
  public:
    void reverseString(vector<char>& s) 
    {
        for(int i=0; i<(s.size()/2); i++)
        {
            int temp=s[i];
            s[i]=s[s.size()-1-i];
            s[s.size()-1-i]=temp;
        }
    }
};