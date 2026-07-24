class Solution {
public:
bool isSafe(int i , int j , int m , int n){
    return ( i>=0 && i<m && j>=0 && j<n);
}
    void dfs(int i ,int j ,  vector<vector<bool>>&visited, vector<vector<char>>&grid, int m , int n){
        visited[i][j]=true;
        vector<vector<int>>dir={{0,-1},{-1,0},{0,1},{1,0}};
        for(int k = 0;k<4;k++){
            int newi=i+dir[k][0];
            int newj=j+dir[k][1];
            if( isSafe(newi,newj,m , n ) && !visited[newi][newj] && grid[newi][newj]=='1'){
                dfs(newi, newj, visited, grid, m , n);
            }
        }
    }
    int numIslands(vector<vector<char>>& grid) {
        int res = 0;
        int m = grid.size();
        int n = grid[0].size();
        vector<vector<bool>>visited(m, vector<bool>(n,false));
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(!visited[i][j] && grid[i][j]=='1'){
                    dfs(i , j ,visited, grid, m , n );
                    res++;
                }
            }
        }
        return res;
    }
};