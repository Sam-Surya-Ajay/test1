class Solution 
{
public:
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) 
    {
        vector<int> ans;

        vector<vector<int>> adj(numCourses);
        vector<int> indegree(numCourses, 0);

        for(int i=0; i<prerequisites.size(); i++)
        {
            adj[prerequisites[i][1]].push_back(prerequisites[i][0]);
            indegree[prerequisites[i][0]]++;
        }
        
        queue<int> q;
        for(int i=0; i<numCourses; i++)
        {
            if(indegree[i]==0)
               q.push(i);
        }
        
        int count=0;
        while(!q.empty())
        {
            int temp=q.front();
            q.pop();
            count++;

            ans.push_back(temp);

            for(int i:adj[temp])
            {
                indegree[i]--;
                if(indegree[i]==0)
                   q.push(i);
            }
        }

        if(count==numCourses)
           return ans;

        return {};
    }
};