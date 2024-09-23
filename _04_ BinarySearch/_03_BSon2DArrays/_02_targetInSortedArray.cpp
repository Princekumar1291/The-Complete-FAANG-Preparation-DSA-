//Problem Link: https://leetcode.com/problems/search-a-2d-matrix/description/

#include<bits/stdc++.h>
using namespace std;

bool searchMatrix(vector<vector<int>>& v, int target) {
  int n=v.size();
  int m=v[0].size();
  int low=0;
  int high=n-1;
  int row=0;
  while(low<=high){
    int mid=low+(high-low)/2;
    if(v[mid][0]<=target) {
      row=mid;
      low=mid+1;
    }
    else high=mid-1;
  }
  low=0;
  high=m-1;
  while(low<=high){
    int mid=low+(high-low)/2;
    if(v[row][mid]==target) return true;
    else if(v[row][mid]<target) low=mid+1;
    else high=mid-1;
  }
  return false;
}

bool searchMatrix(vector<vector<int>>& matrix, int target) {
  int n=matrix.size();
  int m=matrix[0].size();
  int i=0;
  int j=m-1;
  while(i<n && j>=0){
      if(matrix[i][j]==target) return true;
      else if(target<matrix[i][j]) j--;
      else i++;
  }
  return false;
}

int main(){
  vector<vector<int>> v = {{1,3,5,7},{10,11,16,20},{23,30,34,60}};
  int target=3;
  cout<<searchMatrix(v,target);
  return 0;
}