#include<bits/stdc++.h>
using namespace std;

void rotateMatrix(vector<vector<int>>& v){
  int n=v.size();
  vector<vector<int>> ans(n,vector<int>(n));
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      ans[j][n-i-1]=v[i][j];
    }
  }
  v=ans;
}

//first take transpse then reverser the all rows
void rotateMatrixOptimal(vector<vector<int>> &v){
  int n=v.size();
  for(int i=0;i<n;i++){
    for(int j=0;j<i;j++){
      swap(v[i][j],v[j][i]);
    }
  }
  for(auto &ele:v){
    reverse(ele.begin(),ele.end());
  }
}

int main() {
    vector<vector<int>> matrix = {
        {5, 10, 15},
        {20, 25, 30},
        {35, 40, 45}
    };

    for(auto ele:matrix){
      for(int item:ele){
        cout<<item<<" ";
      }
      cout<<endl;
    }
    
    rotateMatrixOptimal(matrix);

    for(auto ele:matrix){
      for(int item:ele){
        cout<<item<<" ";
      }
      cout<<endl;
    }

    return 0;
}
