class Solution 
{
public:
    int distanceBetweenBusStops(vector<int>& distance, int start, int destination) 
    {
        int forwardsum=0, backwardsum=0;

        if(start > destination)
          swap(start, destination);
        
        for(int i=start; i<destination; i++)
        {
            forwardsum += distance[i];
        }
        
        for(int i=destination; i<distance.size()+start; i++)
        {
            backwardsum += distance[i%distance.size()];
        }
        return min(forwardsum, backwardsum);
    }
};