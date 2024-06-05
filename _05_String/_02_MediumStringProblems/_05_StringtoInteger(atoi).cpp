#include<bits/stdc++.h>
using namespace std;

int myAtoi(string s) {
  int n=s.size();
  if(n==0) return 0;

  reverse(s.begin(),s.end());
  while(s.size()>0 && s.back()==' ') s.pop_back();

  n=s.size();
  if(n==0) return 0;

  string temp1="";
  if(s[n-1]=='-') {
      temp1="-";
      s.pop_back();
  }

  if(s[n-1]=='+') s.pop_back();

  while(s.size()>0 && s.back()=='0') s.pop_back();

  reverse(s.begin(),s.end());

  string temp2="";
  for(int i=0;i<s.size();i++){
      if(s[i]-'0'>=0 && s[i]-'0'<=9){
          temp2+=s[i];
      }
      else break;
  }

  if(temp2.size()>=12){
      if(temp1=="-") return INT_MIN;
      else return INT_MAX;
  }
  
  if(temp2.size()==0) return 0;
  long long ans=stoll(temp2);
  if(temp1=="-") ans=-ans;

  if(ans>INT_MAX) return INT_MAX;
  else if(ans<INT_MIN) return INT_MIN;
  return ans;
}

int main(){
  
  return 0;
}