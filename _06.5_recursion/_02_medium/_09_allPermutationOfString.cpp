#include<bits/stdc++.h>
using namespace std;  //N!*n   ,   space n
void allPermutation(vector<int>& v,vector<vector<int>>& ans,vector<int> freq,vector<int> temp){
  if(temp.size()==v.size()){
    ans.push_back(temp);
    return;
  }
  for(int i=0;i<v.size();i++){
    if(!freq[i]){
      temp.push_back(v[i]);
      freq[i]=1;
      allPermutation(v,ans,freq,temp);
      freq[i]=0;
      temp.pop_back();
    }
  }
}

void allpermutationBest(vector<int>& v,vector<vector<int>>& ans,int ind,int n){
  if(ind==n){
    ans.push_back(v);
    return;
  }  
  for(int i=ind;i<n;i++){
    swap(v[ind],v[i]);
    allpermutationBest(v,ans,ind+1,n);
    swap(v[ind],v[i]);
  }
}

void print(vector<vector<int>> v){
  for(auto arr:v){
    for(int ele:arr){
      cout<<ele<<" ";
    }
    cout<<endl;
  }
}

int main(){
  vector<vector<int>> ans;
  vector<int> v={1,2,3};
  int n=v.size();
  vector<int> freq(n,0);
  vector<int> temp;
  // allPermutation(v,ans,freq,temp);
  // print(ans);

  int i=0;
  allpermutationBest(v,ans,i,n);
  print(ans);
  return 0;
}