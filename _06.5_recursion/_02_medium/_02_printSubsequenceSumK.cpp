#include<bits/stdc++.h>
using namespace std;
void printSubSumK(vector<int>& v,vector<int>& temp,int sum,int target,int i,int n){
  if(i==n){
    if(sum==target){
      for(int ele:temp)cout<<ele<<" ";cout<<endl;
    }
    return;
  }
  temp.push_back(v[i]);
  printSubSumK(v,temp,sum+v[i],target,i+1,n);
  temp.pop_back();
  printSubSumK(v,temp,sum,target,i+1,n);
}
int main(){
  vector<int> v={1,2,3,4,2};
  vector<int> temp;
  int i=0;
  int n=v.size();
  int target=5;
  int sum=0;
  printSubSumK(v,temp,sum,target,i,n);
  return 0;
}