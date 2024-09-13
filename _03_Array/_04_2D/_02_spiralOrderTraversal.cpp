//Problem Link: https://leetcode.com/problems/spiral-matrix/description/



#include<bits/stdc++.h>
using namespace std;
vector<int> spiralOrder(vector<vector<int>>& matrix) {
  int l=0;
  int r=matrix[0].size()-1;
  int t=0;
  int d=matrix.size()-1;

  vector<int> ans;
  while(l<=r && t<=d){
      for(int i=l;i<=r;i++){
          ans.push_back(matrix[t][i]);
      }
      t++;

      for(int i=t;i<=d;i++){
          ans.push_back(matrix[i][r]);
      }
      r--;

      if(t>d) break;
      for(int i=r;i>=l;i--){
          ans.push_back(matrix[d][i]);
      }
      d--;

      if(l>r) break;
      for(int i=d;i>=t;i--){
          ans.push_back(matrix[i][l]);
      }
      l++;
  }
  return ans;
}

int main(){
  
  return 0;
}