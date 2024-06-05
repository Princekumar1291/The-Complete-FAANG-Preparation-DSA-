#include<bits/stdc++.h>
using namespace std;

void Multiply(vector<vector<int> >& matrixA, vector<vector<int>>&matrixB) {
  // Code here
  int m1=matrixA.size();
  int n1=matrixA[0].size();
  int m2=matrixB.size();
  int n2=matrixB[0].size();
  vector<vector<int>> ans(m1, vector<int>(n2));
  
  for(int i=0;i<m1;i++){
    for(int j=0;j<n2;j++){
      ans[i][j]=0;
      for(int k=0;k<n1;k++){
        ans[i][j]+=matrixA[i][k]*matrixB[k][j];
      }
    }
  }
  matrixA=ans;
}

int main(){
  
  return 0;
}