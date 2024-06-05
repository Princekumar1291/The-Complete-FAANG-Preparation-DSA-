#include<bits/stdc++.h>
using namespace std;

int findKRotation(int arr[], int n) {
  // code here
  int maxEle=INT_MAX;
  int ans=0;
  int low=0;
  int high=n-1;
  while(low<=high){
      int mid=low+(high-low)/2;
      if(arr[low]<=arr[mid]){
          if(arr[low]<maxEle){
              maxEle=arr[low];
              ans=low;
          }
          low=mid+1;
      }
      else{
          if(arr[mid]<maxEle){
              maxEle=arr[mid];
              ans=mid;
          }
          high=mid-1;
      }
  }
  return ans;
}


int main() {
    int test_case[] = {15, 18, 2, 3, 6, 12};
    int n = sizeof(test_case) / sizeof(test_case[0]);
    int rotation_index = findKRotation(test_case, n);
    cout << "The array is rotated " << rotation_index << " times." << endl;
    return 0;
}