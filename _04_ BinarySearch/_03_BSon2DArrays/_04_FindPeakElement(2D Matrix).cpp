#include<bits/stdc++.h>
using namespace std;

vector<int> findPeakGrid(vector<vector<int>>& mat) {
  int startCol = 0, endCol = mat[0].size()-1;
  while(startCol <= endCol){
    int midCol = startCol + (endCol-startCol)/2;
    int maxRow = 0; 
    for(int i=0; i<mat.size(); i++){
      maxRow = mat[i][midCol] >= mat[maxRow][midCol]? i : maxRow;   
    }
    bool leftIsBig    =   midCol >= startCol+1  &&  mat[maxRow][midCol-1] > mat[maxRow][midCol];
    bool rightIsBig   =   midCol <= endCol-1    &&  mat[maxRow][midCol+1] > mat[maxRow][midCol];
    if(!leftIsBig && !rightIsBig) return vector<int>{ maxRow, midCol};
    else if(rightIsBig)  startCol = midCol+1; 
    else endCol = midCol-1;
  }
  return vector<int>{-1,-1};
}

int main(){
  
  return 0;
}