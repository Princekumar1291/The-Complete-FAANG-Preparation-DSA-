#include<bits/stdc++.h>
using namespace std;
void combinationSum(vector<int>& v,vector<int> temp,vector<vector<int>>& ans,int target,int i,int n){
  if(i==n){
    if(target==0){
      ans.push_back(temp);
    }
    return;
  }

  if(v[i]<=target){
    temp.push_back(v[i]);
    combinationSum(v,temp,ans,target-v[i],i,n);
    temp.pop_back();  
  }
  combinationSum(v,temp,ans,target,i+1,n);
}
void print(vector<vector<int>>& v){
  for(auto arr:v){
    for(int ele:arr){
      cout<<ele<<" ";
    }
    cout<<endl;
  }
}
int main(){
  vector<int> v={1,2,3,5,4,2,3,1};
  int i=0;
  int n=v.size();
  int target=5;
  vector<int> temp;
  vector<vector<int>> ans;
  combinationSum(v,temp,ans,target,i,n);
  print(ans);
  return 0;
}  