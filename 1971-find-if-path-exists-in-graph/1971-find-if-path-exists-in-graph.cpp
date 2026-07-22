class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
       // adjlist
        vector<vector<int>>adjList(n);
        for(auto edge:edges){
            adjList[edge[0]].push_back(edge[1]);
            adjList[edge[1]].push_back(edge[0]);
        }
         // bfs traversal
        queue<int>q;
        vector<bool>visited(n, false);
        q.push(source);
        visited[source]=true;
        while(!q.empty()){
            int temp = q.front();
            q.pop();
            if(temp==destination)return true;
            for(int i=0;i<adjList[temp].size();i++){
                if(!visited[adjList[temp][i]]){
                    q.push(adjList[temp][i]);
                    visited[adjList[temp][i]]=true;
                }
            }
        }
        return false;
    }
};