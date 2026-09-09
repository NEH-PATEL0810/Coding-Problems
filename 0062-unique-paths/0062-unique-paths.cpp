class Solution {
public:
    int uniquePaths(int m, int n) {
        vector<vector<int>> grid(m,vector<int> (n,1));
        for(int c = 1;c<m;++c){
            for(int r = 1;r<n;++r){
                grid[c][r] = grid[c-1][r] + grid[c][r-1];
            }
        }

        return grid[m-1][n-1];
        
        
    }
};