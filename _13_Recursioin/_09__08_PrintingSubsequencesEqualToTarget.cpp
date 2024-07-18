#include<bits/stdc++.h>
using namespace std;
void tarSum(vector<int>& v,vector<int>& temp,int& sum,int& target,int i){
  if(i==v.size()){
    if(target==sum){
      for(int ele:temp) cout<<ele<<" ";cout<<endl;
    }
    return;
  }
  temp.push_back(v[i]);
  sum+=v[i];
  tarSum(v,temp,sum,target,i+1);
  sum-=v[i];
  temp.pop_back();
  tarSum(v,temp,sum,target,i+1);
}



bool tarSumBetter(vector<int>& v,vector<int>& temp,int& sum,int& target,int i){
  if(i==v.size()){
    if(target==sum){
      return true;
    }
    return false;
  }
  temp.push_back(v[i]);
  sum+=v[i];
  if(tarSumBetter(v,temp,sum,target,i+1)==true) return true;
  sum-=v[i];
  temp.pop_back();
  if(tarSumBetter(v,temp,sum,target,i+1)==true) return true;
  return false;
}
int noOfSubseqEqualToTarget(vector<int>& v,int& sum,int& target,int i){
  if(i==v.size()){
    if(target==sum){
      return 1;
    }
    return 0;
  }
  sum+=v[i];
  int l=noOfSubseqEqualToTarget(v,sum,target,i+1);
  sum-=v[i];
  int r=noOfSubseqEqualToTarget(v,sum,target,i+1);
  return l+r;
}
int main(){
  vector<int> temp;
  vector<int> v={1,2,3,1,1};
  int target=2;
  int sum=0;
  // tarSumBetter(v,temp,sum,target,0);
  // for(int ele:temp) cout<<ele<<" ";cout<<endl;

  int t=noOfSubseqEqualToTarget(v,sum,target,0);
  cout<<t<<endl;
  return 0;
}