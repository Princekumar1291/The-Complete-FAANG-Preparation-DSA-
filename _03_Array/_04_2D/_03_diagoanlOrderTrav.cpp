//Problem Link: https://leetcode.com/problems/diagonal-traverse/description/

#include<bits/stdc++.h>
using namespace std;


vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
  int n=mat.size();
  int m=mat[0].size();
  vector<vector<int>> ans(n+m-1);
  for(int i=0;i<n;i++){
      for(int j=0;j<m;j++){
          ans[i+j].push_back(mat[i][j]);
      }
  }
  vector<int> fans;
  for(int k=0;k<m+n-1;k++){
      if(k%2==0) reverse(ans[k].begin(),ans[k].end());
      for(int ele:ans[k]) fans.push_back(ele);
  }
  return fans;
}






vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
  int n=mat.size();
  int m=mat[0].size();
  bool up=true;
  vector<int> ans(n*m);
  int row=0;
  int col=0;
  int i=0;
  while(row<n && col<m){
      if(up){
          while(row>0 && col<m-1){
              ans[i++]=mat[row][col];
              row--;
              col++;
          }
          ans[i++]=mat[row][col];
          if(col==m-1) row++;
          else col++;
      }
      else{
          while(row<n-1 && col>0){
              ans[i++]=mat[row][col];
              row++;
              col--;
          }
          ans[i++]=mat[row][col];
          if(row==n-1) col++;
          else row++;
      }
      up=!up;
  }
  return ans;
}