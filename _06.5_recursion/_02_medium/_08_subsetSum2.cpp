#include<bits/stdc++.h>
using namespace std;
void subsetSumBrut(vector<int>& v,set<vector<int>>& st,vector<int> temp,int i,int n){
  if(i==n){
    st.insert(temp);
    return;
  }
  temp.push_back(v[i]);
  subsetSumBrut(v,st,temp,i+1,n);
  temp.pop_back();
  subsetSumBrut(v,st,temp,i+1,n);
}

void subsetSum(vector<int>& v,vector<vector<int>>& ans,vector<int> temp,int i,int n){
  ans.push_back(temp);
  for(int t=i;t<n;t++){
    if(i!=t && v[t]==v[t-1]) continue;
    temp.push_back(v[t]);
    subsetSum(v,ans,temp,t+1,n);
    temp.pop_back();
  }
}
int main(){
  vector<vector<int>> ans;
  vector<int> temp;
  vector<int> v={1,2,2};
  sort(v.begin(),v.end());
  int i=0;
  int n=v.size();
  int sum=0;
  subsetSum(v,ans,temp,i,n);
  
  for(auto d:ans){
    for(int ele:d){
      cout<<ele<<" ";
    }cout<<endl;
  }
  return 0;
}