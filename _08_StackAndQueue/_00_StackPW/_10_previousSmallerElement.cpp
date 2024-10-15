#include<bits/stdc++.h>
using namespace std;

vector<int> previousSmallerEle(vector<int> v){
  int n=v.size();
  vector<int> ans(n);
  stack<int> st;

  for(int i=0;i<n;i++){
    while(!st.empty() && st.top()>=v[i]){
      st.pop();
    }
    if(st.empty()){
      ans[i]=-1;
    }else{
      ans[i]=st.top();
    }
    st.push(v[i]);
  }
  return ans;
}

int main(){
  vector<int> v={100,80,60,70,60,75,85};
  vector<int> ans=previousSmallerEle(v);
  for(auto ele: ans) cout<<ele<<" ";
  cout<<endl;
  return 0;
}
//-1 -1 -1 60 -1 60 75 