#include<bits/stdc++.h>
using namespace std;



bool balanceBrac(string s) {
    int balance = 0;
    for (char c : s) {
        if (c == '(') {
            balance++;
        } else if (c == ')') {
            balance--;
            if (balance < 0) {
                return false;
            }
        }
    }
    return balance == 0; // Balanced if all opening parentheses are closed
}



bool balanceBrac(string s){
  int n=s.size();
  stack<char> st;
  for(int i=0;i<n;i++){
    if(s[i]=='(') st.push('(');
    else if(s[i]==')' ){
      if(st.empty()) return false;
      else st.pop();
    }
  }
  return st.empty();
}



int main(){
  string s="(((()))";
  bool ans=balanceBrac(s);
  cout<<ans;
  return 0;
}