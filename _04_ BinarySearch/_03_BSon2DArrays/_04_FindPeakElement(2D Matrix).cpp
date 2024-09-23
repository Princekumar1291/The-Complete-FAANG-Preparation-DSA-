//Problem Link: https://leetcode.com/problems/find-a-peak-element-ii/description/


#include<bits/stdc++.h>
using namespace std;

vector<int> findPeakGrid(vector<vector<int>>& mat) {
  int m = mat.size();
  int n = mat[0].size();
  
  // Direction vectors: {up, down, left, right}
  vector<pair<int, int>> dir = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
  
  for (int i = 0; i < m; i++) {
      for (int j = 0; j < n; j++) {
          bool isPeak = true;
          
          // Check all four directions
          for (auto it : dir) {
              int x = i + it.first;
              int y = j + it.second;
              
              // Ensure (x, y) is within bounds and check if the neighbor is greater
              if (x >= 0 && x < m && y >= 0 && y < n && mat[x][y] > mat[i][j]) {
                  isPeak = false;
                  break;
              }
          }
          
          // If current element is a peak, return its coordinates
          if (isPeak) {
              return {i, j};
          }
      }
  }
  
  return {0, 0}; // In case no peak is found, though a peak should always exist
}

int main(){
  int m,n;
  cin>>m>>n;
  vector<vector<int>> mat(m,vector<int>(n));
  for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
      cin>>mat[i][j];
    }
  }
  vector<int> ans=findPeakGrid(mat);
  cout<<ans[0]<<" "<<ans[1];
  return 0;
}