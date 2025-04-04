//Problem Link: https://www.geeksforgeeks.org/problems/subset-sums2234/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=subset-sums


#include<bits/stdc++.h>
using namespace std;
void subsetSum(vector<int>& v,vector<int>& ans,int i,int n,int sum){
  if(i==n){
    ans.push_back(sum);
    return;
  }
  subsetSum(v,ans,i+1,n,sum+v[i]);
  subsetSum(v,ans,i+1,n,sum);
}
int main(){
  vector<int> ans;
  vector<int> v={1,2,1};
  int i=0;
  int n=v.size();
  int sum=0;
  subsetSum(v,ans,i,n,sum);
  sort(ans.begin(),ans.end());
  for(int ele:ans)cout<<ele<<" ";
  return 0;
}