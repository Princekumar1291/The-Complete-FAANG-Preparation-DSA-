// https://leetcode.com/problems/max-area-of-island/


class Solution {
  public:
      int helper(vector<vector<int>>& grid, int i, int j, vector<vector<int>>& vis, int n, int m) {
          // Base case: if out of bounds or already visited or water
          if (i < 0 || j < 0 || i >= n || j >= m || grid[i][j] == 0 || vis[i][j] == 1) {
              return 0;
          }
          
          // Mark the current cell as visited
          vis[i][j] = 1;
          
          // Explore all four directions
          int area = 1; // Current cell
          area += helper(grid, i + 1, j, vis, n, m); // Bottom
          area += helper(grid, i - 1, j, vis, n, m); // Top
          area += helper(grid, i, j + 1, vis, n, m); // Right
          area += helper(grid, i, j - 1, vis, n, m); // Left
          
          return area;
      }
      
      int maxAreaOfIsland(vector<vector<int>>& grid) {
          int n = grid.size();
          int m = grid[0].size();
          vector<vector<int>> vis(n, vector<int>(m, -1));
          int maxArea = 0;
          
          // Iterate over all cells in the grid
          for (int i = 0; i < n; i++) {
              for (int j = 0; j < m; j++) {
                  if (grid[i][j] == 1 && vis[i][j] == -1) {
                      int currentArea = helper(grid, i, j, vis, n, m);
                      maxArea = max(maxArea, currentArea);
                  }
              }
          }
          
          return maxArea;
      }
  };
