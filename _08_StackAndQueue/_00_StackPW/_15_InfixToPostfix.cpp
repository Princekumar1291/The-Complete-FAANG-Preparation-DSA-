// Prefix expression (2+6*4/8-3) it is all about operator
//In -->v1 op v2
//Pre -->op v1 v2
//Post -->v1 v2 op


#include<bits/stdc++.h>
using namespace std;
int opWeight(char ch){
  if(ch=='+' || ch=='-') return 1;
  return 2;
}
int main(){
  string s="(7+9)*4/8-3";
  int n=s.size();
  stack<string> val;
  stack<char> op;
  for(int i=0;i<n;i++){
    if(isdigit(s[i])){
      string temp="";
      temp+=s[i];
      val.push(temp);
    }
    else{
      if(op.empty()){
        op.push(s[i]);
      }
      else if(s[i]=='(') op.push(s[i]);
      else if(op.top()=='(') op.push(s[i]);
      else if(s[i]==')'){
        while(!op.empty() && op.top()!='('){
          string s2=val.top();val.pop();
          string s1=val.top();val.pop();
          char c=op.top();op.pop();
          string ans=s1+s2+c;
          val.push(ans);
        }
        op.pop();
      }
      else if(opWeight(s[i])>opWeight(op.top())){
        op.push(s[i]);
      }
      else{
        while(!op.empty() && opWeight(s[i])<=opWeight(op.top())){
          string s2=val.top();val.pop();
          string s1=val.top();val.pop();
          char c=op.top();op.pop();
          string ans=s1+s2+c;
          val.push(ans);
        }
        op.push(s[i]);
      }
    }
  }
  while(!op.empty()){
    string s2=val.top();val.pop();
    string s1=val.top();val.pop();
    char c=op.top();op.pop();
    string ans=s1+s2+c;
    val.push(ans);
  }
  cout<<val.top();
  return 0;
}


