#include<bits/stdc++.h>
using namespace std;

void rotateArray(int arr[],int n){
  reverse(arr+1,arr+n);
  reverse(arr,arr+n);
}
long long arraySum(int arr[],int n){
  long long ans=0;
  for(int i=0;i<n;i++) {
      ans+=arr[i]*i;
  }
  return ans;
}
long long max_sum_brut(int a[], int n) {
  long long ans=0;
  for(int i=0;i<n;i++){
      long long temp=arraySum(a,n);
      ans=max(ans,temp);
      rotateArray(a,n);
  }
  return ans;
}


long long max_sum(int a[], int n) {
  // Your code here
  long long sum=0;
  long long prevSum=0;
  for(int i=0;i<n;i++) {
      sum+=a[i];
      prevSum+=1LL*a[i]*i;
  }
  
  long long ans=prevSum;
  for(int i=0;i<n;i++){
      prevSum+=sum-(1LL*n*a[n-1-i]);
      if(prevSum>ans) ans=prevSum;
  }
  return ans;
}

int main(){
  
  return 0;
}