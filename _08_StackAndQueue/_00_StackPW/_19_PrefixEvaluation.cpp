#include<bits/stdc++.h>
using namespace std;
int cal(int a,int b,char op){
  if(op=='+') return a+b;
  else if(op=='-') return a-b;
  else if(op=='*') return a*b;
  else return  a/b;
}
int main(){
  string s="-/*+79483";
  int n=s.size();
  stack<int> val;
  for(int i=n-1;i>=0;i--){
    if(isdigit(s[i])){
      val.push(s[i]-'0');
    }
    else{
      char op=s[i];
      int a=val.top();val.pop();
      int b=val.top();val.pop();
      int ans=cal(a,b,op);
      val.push(ans);
    }
  }
  cout<<val.top();
  return 0;
}