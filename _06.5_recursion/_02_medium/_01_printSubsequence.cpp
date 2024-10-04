#include<bits/stdc++.h>
using namespace std;
void printSubsequence(vector<int>& v,vector<int>& temp,int i,int n){
  if(i==n){
    for(int ele:temp)cout<<ele<<" ";
    cout<<endl;
    return;
  }
  temp.push_back(v[i]);
  printSubsequence(v,temp,i+1,n);
  temp.pop_back();
  printSubsequence(v,temp,i+1,n);
}
int main(){
  vector<int> v={1,2,3};
  int n=v.size();
  vector<int> temp;
  printSubsequence(v,temp,0,n);  
  return 0;
}