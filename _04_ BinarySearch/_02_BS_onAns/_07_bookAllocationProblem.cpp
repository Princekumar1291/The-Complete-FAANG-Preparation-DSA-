#include<bits/stdc++.h>
using namespace std;

int helper(int arr[],int n,int page){
  int ans=0;
  int sum=0;
  for(int i=0;i<n;i++){
      sum+=arr[i];
      if(sum==page){
          ans++;
          sum=0;
      }
      else if(sum>page){
          ans++;
          sum=arr[i];
      }
  }
  if(sum!=0) ans++;
  return ans;
  
}
int findPages(int A[], int N, int M) 
{
  //code here
  if(M>N) return -1;
  int ans=-1;
  int low=*max_element(A,A+N);
  int high=accumulate(A,A+N,0);
  // cout<<high<<" "<<low;
  while(low<=high){
      int mid=low+(high-low)/2;
      int man=helper(A,N,mid);
      if(man>M) low=mid+1;
      else {
          ans=mid;
          high=mid-1;
      }
  }
  return ans;
}

int main(){
  
  return 0;
}