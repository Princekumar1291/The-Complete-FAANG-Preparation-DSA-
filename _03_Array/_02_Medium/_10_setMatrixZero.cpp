#include<bits/stdc++.h>
using namespace std;

void setZeroesBrut1(vector<vector<int>> &v){ //O(n)
  int n = v.size();
  int m = v[0].size();
  unordered_set<int> st1;
  unordered_set<int> st2;
  for (int i = 0; i < n; i++){
    for (int j = 0; j < m; j++){
      if (v[i][j] == 0){
        st1.insert(i);
        st2.insert(j);
      }
    }
  }
  for (int i = 0; i < n; i++){
    if (st1.find(i) != st1.end()){
      for (int j = 0; j < m; j++){
        v[i][j] = 0;
      }
    }
  }
  for (int i = 0; i < m; i++){
    if (st2.find(i) != st1.end()){
      for (int j = 0; j < n; j++){
        v[j][i] = 0;
      }
    }
  }
}

void setZeroesBrut2(vector<vector<int>> &v){
  int n = v.size();
  int m = v[0].size();
  unordered_set<int> st1;
  unordered_set<int> st2;
  for (int i = 0; i < n; i++){
    for (int j = 0; j < m; j++){
      if (v[i][j] == 0){
        st1.insert(i);
        st2.insert(j);
      }
    }
  }
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
      if(st1.find(i)!=st1.end() || st2.find(j)!=st2.end()){
        v[i][j]=0;
      }
    }
  }
}



int main(){
  
  return 0;
}