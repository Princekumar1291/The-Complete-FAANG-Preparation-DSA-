#include<bits/stdc++.h>
using namespace std;
void printSubSumK(vector<int>& v,vector<int>& temp,int sum,int target,int i,int n,bool& check){
  if(i==n){
    if(sum==target){
      for(int ele:temp)cout<<ele<<" ";cout<<endl;
      check=false;
    }
    return;
  }
  temp.push_back(v[i]);
  if(check)printSubSumK(v,temp,sum+v[i],target,i+1,n,check);
  temp.pop_back();
  if(check)printSubSumK(v,temp,sum,target,i+1,n,check);
}
int main(){
  vector<int> v={1,2,3,4,2};
  vector<int> temp;
  int i=0;
  int n=v.size();
  int target=5;
  int sum=0;
  bool check=true;
  printSubSumK(v,temp,sum,target,i,n,check);
  return 0;
}