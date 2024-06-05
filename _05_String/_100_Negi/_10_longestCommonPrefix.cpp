#include<bits/stdc++.h>
using namespace std;

string longestCommonPrefix (string arr[], int n){
  sort(arr,arr+n);
  if(n==1) return arr[0];
  int f=arr[0].size();
  int l=arr[n-1].size();
  string ans="";
  for(int i=0;i<min(f,l);i++){
    if(arr[0][i]==arr[n-1][i])  ans+=arr[0][i];
    else break;
  }
  if(ans=="") return "-1";
  return ans;
}

int main(){
  
  return 0;
}