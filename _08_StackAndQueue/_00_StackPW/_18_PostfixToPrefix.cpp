#include<bits/stdc++.h>
using namespace std;
int main(){
  string s="79+4*8/3-";
  stack<string> val;
  int n=s.size();
  for(int i=0;i<n;i++){
    if(isdigit(s[i])){
      string temp="";
      temp+=s[i];
      val.push(temp);
    }
    else{
      string s2=val.top();val.pop();
      string s1=val.top();val.pop();
      val.push(s[i]+s1+s2);
    }
  }
  cout<<val.top();
  return 0;
}