class Solution {
public:
    
    bool dfs(int source , int destination, vector<vector<int>>& adj, vector<bool>&vis){
        if(source == destination )return true;
        vis[source]=true;
        for(int neighbour : adj[source]){
            if(!vis[neighbour]){
                if(neighbour ==destination || dfs(neighbour, destination , adj, vis)){
                    return true;
                }
            }
        }
        return false;

    }
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        // adj list 
      vector<vector<int>>adj(n);
      for(auto&e: edges){
        adj[e[0]].push_back(e[1]);
        adj[e[1]].push_back(e[0]);
      }
      vector<bool>vis(n,false);
      return dfs(source , destination , adj , vis);
    }
};