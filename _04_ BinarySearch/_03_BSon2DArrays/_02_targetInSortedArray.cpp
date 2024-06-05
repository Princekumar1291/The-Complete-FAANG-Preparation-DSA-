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
  int n = matrix.size();
  int m = matrix[0].size();

  //apply binary search:
  int low = 0, high = n * m - 1;
  while (low <= high) {
    int mid = (low + high) / 2;
    int row = mid / m, col = mid % m;
    if (matrix[row][col] == target) return true;
    else if (matrix[row][col] < target) low = mid + 1;
    else high = mid - 1;
  }
  return false;
}

int main(){
  
  return 0;
}