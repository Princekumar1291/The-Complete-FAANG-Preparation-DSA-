#include<bits/stdc++.h>
using namespace std;
void revArr(vector<int>& v,int n,int i){
  if(i>n/2) return;
  swap(v[i],v[n-i]);
  revArr(v,n,i+1);
}
int main(){
  vector<int> v={1,2,3,4,5,6,7};
  int n=v.size();
  revArr(v,n-1,0);

  for(auto ele:v)cout<<ele<<" ";
  return 0;
}
