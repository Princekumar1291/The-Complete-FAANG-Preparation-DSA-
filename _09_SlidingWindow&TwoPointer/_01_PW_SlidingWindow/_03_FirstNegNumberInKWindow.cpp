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
vector<int> printFirstNegativeInteger2(vector<int> v,int N, int K) {
    queue<int> q;
    vector<int> ans;
    for(int i=0;i<N;i++) if(v[i]<0) q.push(i);
    for(int i=K-1;i<N;i++){
        if(q.empty()){
            ans.push_back(0);
        }
        else if(q.front()>=i-K+1 && q.front()<=i){
            ans.push_back(v[q.front()]);
        }
        else ans.push_back(0);
        if(!q.empty() && q.front()==i-K+1) q.pop();
    }
    return ans;
 }




int main(){
  int n=9,k=4;
  vector<int> v={2,-3,4,4,-7,-1,4,-2,6};
  vector<int> ans=printFirstNegativeInteger2(v,n,k);
  for(int i=0;i<ans.size();i++) cout<<ans[i]<<" "; 
  return 0;
}

