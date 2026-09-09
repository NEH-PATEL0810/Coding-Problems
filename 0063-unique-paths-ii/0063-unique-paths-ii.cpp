class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int m = obstacleGrid.size();
        int n = obstacleGrid[0].size();

         vector<vector<int>> grid(m,vector<int> (n,0));

        for(int r=0;r<m;++r){
            for(int c=0;c<n;++c){
                if(obstacleGrid[r][c] == 1){
                   grid[r][c] = 0;
                }
                else if(r==0 && c==0){
                  grid[r][c] = 1;
                }
                else{
                    if(r>0){
                        grid[r][c] += grid[r-1][c];
                    }
                    if(c>0){
                        grid[r][c] += grid[r][c-1];
                    }
                }
            }
        }

        return grid[m-1][n-1];


        
    }
};