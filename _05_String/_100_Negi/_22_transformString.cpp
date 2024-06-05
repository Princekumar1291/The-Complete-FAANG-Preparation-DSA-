#include<bits/stdc++.h>
using namespace std;

int transform (string A, string B){
  //code here.
  int n=A.size();
  int m=B.size();
  if(n!=m) return -1;
  int arr[256]={0};
  for(int i=0;i<n;i++){
    arr[A[i]]++;
    arr[B[i]]--;
  }
  for(int i=0;i<256;i++) if(arr[i]!=0) return -1;
  
  int i=n-1;
  int j=m-1;
  int ans=0;
  while(i>=0){
    while(i>=0 && A[i]!=B[j]){
      i--;
      ans++;
    }
    i--;
    j--;
  }
  return ans;
}

int main(){
  
  return 0;
}