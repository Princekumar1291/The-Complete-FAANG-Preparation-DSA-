#include<bits/stdc++.h>
using namespace std;

int findSubString(string str){  
  int n=str.size();
  int ans=n;
  unordered_set<char> st;
  for(auto ele:str) st.insert(ele);
  int t=st.size();
  
  for(int i=0;i<n;i++){
    unordered_set<char> st2;
    for(int j=i;j<n;j++){
      st2.insert(str[j]);
      if(st2.size()==t){
        ans=min(ans,j-i+1);
        break;
      }
    }
  }
  return ans;
}

int main(){
  
  return 0;
}