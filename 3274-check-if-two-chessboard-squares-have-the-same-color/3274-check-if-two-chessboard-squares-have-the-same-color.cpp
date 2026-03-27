class Solution 
{
public:
    int check(string coordinate)
    {
        int temp1=int(coordinate[0]-'a'+1)%2;
        int temp2=int(coordinate[1]-'0')%2;

        return temp1==temp2 ? 0 : 1;
    }
    bool checkTwoChessboards(string coordinate1, string coordinate2) 
    {
        return check(coordinate1)==check(coordinate2);
    }
};