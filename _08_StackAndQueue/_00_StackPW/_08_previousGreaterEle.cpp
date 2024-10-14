// POP ANS(TOP) PUSH

#include<bits/stdc++.h>
using namespace std;

vector<int> previousGreaterEle(vector<int> v){
  int n=v.size();
  vector<int> ans(n);
  stack<int> st;
  for(int i=1;i<n;i++){
    while(!st.empty() && st.top()<=v[i]){
      st.pop();
    }
    if(st.empty()){
      ans[i]=-1;
    }
    else{
      ans[i]=st.top();
    }
    st.push(v[i]);
  }
  return ans;
}

int main(){
  vector<int> v={3,1,2,5,4,6,2,3};
  vector<int> ans=previousGreaterEle(v);
  for(auto ele : ans) cout<<ele<<" ";
  return 0;
}