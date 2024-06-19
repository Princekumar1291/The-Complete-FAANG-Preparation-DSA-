#include<bits/stdc++.h>
using namespace std;
int main(){
  string s="-/*+79483";
  int n=s.size();
  stack<string> val;
  for(int i=n-1;i>=0;i--){
    if(isdigit(s[i])){
      string temp="";
      temp+=s[i];
      val.push(temp);
    }
    else{
      char op=s[i];
      string a=val.top();val.pop();
      string b=val.top();val.pop();
      val.push(a+op+b);
    }
  }
  cout<<val.top();
  return 0;
}