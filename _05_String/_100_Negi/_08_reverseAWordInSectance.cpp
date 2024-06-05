#include<bits/stdc++.h>
using namespace std;

string reverseWords(string s) {
  stringstream ss(s);
  string temp;
  string ans;
  bool check=true;
  while(getline(ss,temp,'.')){
      if(check) {
        ans=temp+ans;
        check=false;
      }
      else ans=temp+"."+ans;
  }
  return ans;
}

int main(){
  
  return 0;
}