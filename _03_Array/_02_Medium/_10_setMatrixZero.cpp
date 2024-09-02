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






class Solution {  //best
public:
    void setZeroes(vector<vector<int>>& mat) {
        int m = mat.size();
        int n = mat[0].size();
        
        bool firstRowZero = false, firstColZero = false;
        
        // Determine if the first row and first column should be zero
        for (int i = 0; i < m; i++) {
            if (mat[i][0] == 0) firstColZero = true;
        }
        for (int j = 0; j < n; j++) {
            if (mat[0][j] == 0) firstRowZero = true;
        }
        
        // Use the first row and first column to mark zeroes
        for (int i = 1; i < m; i++) {
            for (int j = 1; j < n; j++) {
                if (mat[i][j] == 0) {
                    mat[i][0] = 0;
                    mat[0][j] = 0;
                }
            }
        }
        
        // Set matrix elements to zero based on the marks
        for (int i = 1; i < m; i++) {
            for (int j = 1; j < n; j++) {
                if (mat[i][0] == 0 || mat[0][j] == 0) {
                    mat[i][j] = 0;
                }
            }
        }
        
        // Finally, set the first row and first column to zero if needed
        if (firstColZero) {
            for (int i = 0; i < m; i++) {
                mat[i][0] = 0;
            }
        }
        if (firstRowZero) {
            for (int j = 0; j < n; j++) {
                mat[0][j] = 0;
            }
        }
    }
};
