#include<bits/stdc++.h>
using namespace std;

int findExtra(int n, int arr1[], int arr2[]) {
  int i=0;
  int j=n-2;
  while(i<=j){
      int mid=(i+j)/2;
      if(arr1[mid]==arr2[mid]){
          i=mid+1;
      }
      else{
          j=mid-1;
      }
  }
  return i;
}

int main(){
  
  return 0;
}