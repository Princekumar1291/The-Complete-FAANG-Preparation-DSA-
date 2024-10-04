#include<bits/stdc++.h>
using namespace std;
void combinationSum(vector<int>& v,vector<int> temp,vector<vector<int>>& ans,int sum,int target,int i,int n){
  if(i==n){
    if(sum==target){
      ans.push_back(temp);
    }
    return;
  }
  temp.push_back(v[i]);
  combinationSum(v,temp,ans,sum+v[i],target,i+1,n);
  temp.pop_back();
  combinationSum(v,temp,ans,sum,target,i+1,n);
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
  int sum=0;
  vector<int> temp;
  vector<vector<int>> ans;
  combinationSum(v,temp,ans,sum,target,i,n);
  print(ans);
  return 0;
}