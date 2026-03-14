class Solution {
    public:
    void dfs(vector<vector<int>>& isConnected, int n, vector<bool>&visited, int src){
        visited[src]=true;
        for(int node=0;node<n;node++){
            if(!visited[node] && isConnected[src][node]==1){
                dfs(isConnected,n,visited,node);
            }
        }
    }
        int findCircleNum(vector<vector<int>>& isConnected) {
            int count =0;
            int n=isConnected.size();
            vector<bool>visited(n,false);
            for(int i=0;i<n;i++){
        if(!visited[i]) {
            dfs(isConnected, n, visited, i);
            count++;
        }
    }
            return count;
        }
    };
    