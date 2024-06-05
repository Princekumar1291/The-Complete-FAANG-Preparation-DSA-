#include<bits/stdc++.h>
using namespace std;

void next_permutationBuiltin(vector<int>& v){
  next_permutation(v.begin(),v.end());//using in-built function of C++
  for(auto ele : v) cout<<ele<<" ";
  cout<<endl;
}

void nextPermutation(vector<int>& v){ //O(n)
  int n=v.size();
  int t=-1;
  for(int i=n-2;i>=0;i--){
    if(v[i]<v[i+1]){
      t=i;
      break;
    }
  }
  if(t==-1) {
    reverse(v.begin(),v.end());
    return ;
  }
  for(int i=n-1;i>t;i--){
    if(v[i]>v[t]){
      swap(v[i],v[t]);
      break;
    } 
  }
  reverse(v.begin()+t+1,v.end());
}
int main(){
  vector<int> v={2,1,5,4,3,0,0};
  // nextPermutation(v);
  for(auto ele:v) cout<<ele<<" ";
  cout<<endl;

  next_permutationBuiltin(v);
  return 0;
}