#include<bits/stdc++.h>
using namespace std;

string reverseWords(string s) {
  string ans="";
  stringstream ss(s);
  string temp;
  bool check=true;
  while(ss>>temp){
    if(check) {
      ans=temp+ans;
      check=false;
    }
    else {
      ans=temp+" "+ans;
    }
  }
  return ans;
}

int main(){
  
  return 0;
}