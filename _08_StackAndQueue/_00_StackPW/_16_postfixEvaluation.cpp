#include<bits/stdc++.h>
using namespace std;
int cal(int a,int b,char op){
  if(op=='+') return a+b;
  else if(op=='-') return a-b;
  else if(op=='*') return a*b;
  else return  a/b;
}
int main(){
  string s="79+4*8/3-";
  int n=s.size();
  stack<int> val;
  for(int i=0;i<n;i++){
    if(isdigit(s[i])) val.push(s[i]-'0');
    else{
      int val2=val.top();val.pop();
      int val1=val.top();val.pop();
      char o=s[i];
      int ans=cal(val1,val2,o);
      val.push(ans);
    }
  }
  cout<<val.top();
  return 0;
}