class Solution 
{
public:
    int countPoints(string rings) 
    {
        int count=0;
        unordered_map<int, set<char>> temp;

        for(int i=0; i<rings.length(); i+=2)
        {
            char color=rings[i];
            int rod=rings[i+1] - '0';
            temp[rod].insert(color);
        }

        for(auto i:temp)
        {
            if(i.second.size()==3)
               count++;
        }
        

        return count;
    }
};