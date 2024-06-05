#include<bits/stdc++.h>
using namespace std;

string removeDuplicates(string str) {
  // code here
  string ans="";
  int n=str.size();
  unordered_set<char> st;
  for(int i=0;i<n;i++){
    if(st.empty() || st.find(str[i])==st.end()){
      ans+=str[i];
    }
  st.insert(str[i]);
  }
  return ans;
}

int main(){
  
  return 0;
}