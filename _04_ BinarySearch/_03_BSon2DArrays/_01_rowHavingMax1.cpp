//Problem Link: https://www.geeksforgeeks.org/problems/row-with-max-1s0023/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=row-with-max-1s


#include <bits/stdc++.h>
using namespace std;

int rowWithMax1sBrut(vector<vector<int>> &matrix, int n, int m) {
  int cntMax = 0;
  int index = -1;

  //traverse the matrix:
  for (int i = 0; i < n; i++) {
      int cntOnes = 0;
      for (int j = 0; j < m; j++) {
          cntOnes += matrix[i][j];
      }
      if (cntOnes > cntMax) {
          cntMax = cntOnes;
          index = i;
      }
  }
  return index;
}

int lowerBound(vector<int> arr, int n, int x) {
  int low = 0, high = n - 1;
  int ans = n;
  while (low <= high) {
      int mid = (low + high) / 2;
      // maybe an answer
      if (arr[mid] >= x) {
          ans = mid;
          //look for smaller index on the left
          high = mid - 1;
      }
      else {
          low = mid + 1; // look on the right
      }
  }
  return ans;
}
int rowWithMax1s(vector<vector<int> > &arr) {
    int n=arr.size();
    int m=arr[0].size();
    int i=0;
    int j=m-1;
    int ans=-1;
    while(i<n && j>=0){
        if(arr[i][j]==1){
            ans=i;
            j--;
        }
        else{
            i++;
        }
    }
    return ans;
}

int main()
{
    vector<vector<int>> matrix = {{1, 1, 1}, {0, 0, 1}, {0, 0, 0}};
    int n = 3, m = 3;
    cout << "The row with maximum no. of 1's is: " <<
         rowWithMax1s(matrix) << '\n';
}

