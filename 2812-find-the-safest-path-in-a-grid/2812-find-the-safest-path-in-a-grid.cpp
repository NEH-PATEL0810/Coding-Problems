class Solution {
public:
    int n;
    vector<vector<int>> dist;
    vector<pair<int, int>> dirs = {{1,0},{-1,0},{0,1},{0,-1}};

    // Multi-source BFS to compute distance from nearest thief
    void computeDistance(vector<vector<int>>& grid) {
        queue<pair<int,int>> q;
        dist.assign(n, vector<int>(n, -1));

        // Push all thieves into the queue
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (grid[i][j] == 1) {
                    dist[i][j] = 0;
                    q.push({i, j});
                }
            }
        }

        while (!q.empty()) {
            auto [x, y] = q.front();
            q.pop();

            for (auto [dx, dy] : dirs) {
                int nx = x + dx;
                int ny = y + dy;

                if (nx >= 0 && nx < n && ny >= 0 && ny < n &&
                    dist[nx][ny] == -1) {

                    dist[nx][ny] = dist[x][y] + 1;
                    q.push({nx, ny});
                }
            }
        }
    }

    // Check if a path exists with safeness >= limit
    bool canReach(int limit) {

        if (dist[0][0] < limit)
            return false;

        queue<pair<int,int>> q;
        vector<vector<bool>> vis(n, vector<bool>(n, false));

        q.push({0,0});
        vis[0][0] = true;

        while (!q.empty()) {
            auto [x, y] = q.front();
            q.pop();

            if (x == n - 1 && y == n - 1)
                return true;

            for (auto [dx, dy] : dirs) {
                int nx = x + dx;
                int ny = y + dy;

                if (nx >= 0 && nx < n &&
                    ny >= 0 && ny < n &&
                    !vis[nx][ny] &&
                    dist[nx][ny] >= limit) {

                    vis[nx][ny] = true;
                    q.push({nx, ny});
                }
            }
        }

        return false;
    }

    int maximumSafenessFactor(vector<vector<int>>& grid) {

        n = grid.size();

        computeDistance(grid);

        int low = 0;
        int high = 2 * n;   // Maximum possible distance in the grid
        int ans = 0;

        while (low <= high) {

            int mid = low + (high - low) / 2;

            if (canReach(mid)) {
                ans = mid;
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }

        return ans;
    }
};