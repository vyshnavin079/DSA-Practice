class Solution {
    public:
        int solve(vector<vector<char>>& grid, int i, int j){
            if(i<0 || j<0 && i>=m || j>=n || grid[i][j] != 1) return; 
            if(grid[i][j] == '$')
        }
        solve(grid,i+1,j);
        solve(grid,i-1,j);
        solve(grid,i , j+1);
        solve(grid,i, j-1);
        int numIslands(vector<vector<char>>& grid) {
            int m= grid.size();
            int n=grid[0].size();
            int islands =0;
    
            for(int i=0;i<n;i++){
                for(int j=0;j<m;j++){
                    if(grid[i][j] == 1) solve();
    
                }
            }
    
        }
    };