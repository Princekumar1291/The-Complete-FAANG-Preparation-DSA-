// Problem Link: https://www.geeksforgeeks.org/problems/first-negative-integer-in-every-window-of-size-k3345/1

#include<bits/stdc++.h>
using namespace std;

//brute force
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

//sliding window
vector<long long> printFirstNegativeInteger2(long long int A[],long long int N, long long int K) {
    queue<long long> q;
    vector<long long> ans;
    for(int i=0;i<N;i++) if(A[i]<0) q.push(i);
    for(int i=K-1;i<N;i++){
        if(!q.empty() && q.front()>=i-K+1 && q.front()<=i){
            ans.push_back(A[q.front()]);
        }
        else ans.push_back(0);
        if(!q.empty() && q.front()==i-K+1) q.pop();
    }
    return ans;
}




int main(){
  int n=9,k=4;
  long long int arr[]={12, -1, -7, 8, -15, 30, 16, 28, -3};
  vector<long long> ans=printFirstNegativeInteger2(arr,n,k);
  for(auto it:ans) cout<<it<<" ";
  return 0;
}

