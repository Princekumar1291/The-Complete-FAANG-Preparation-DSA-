// Problem Link: https://www.geeksforgeeks.org/problems/first-negative-integer-in-every-window-of-size-k3345/1

#include<bits/stdc++.h>
using namespace std;

vector<long long> printFirstNegativeInteger(long long int arr[],long long int n, long long int k){
  vector<long long > ans;
  for(int i=0;i<n-k+1;i++){
    bool check=true;
    for(int j=i;j<i+k;j++){
      if(arr[j]<0) {
        ans.push_back(arr[j]);
        check=false;
        break;
      }
    }
    if(check) ans.push_back(0);
  }
  return ans;
}


int main(){
  
  return 0;
}

