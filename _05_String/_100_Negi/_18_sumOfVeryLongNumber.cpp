//Problem Link: https://www.geeksforgeeks.org/problems/sum-of-numbers-or-number1219/1?page=1&difficulty%255B%255D=1&category%255B%255D=Strings&sortBy=submissions


#include<bits/stdc++.h>
using namespace std;

string findSum(string x, string y) {
  int n=x.size();
  int m=y.size();
  string ans="";
  int l=0;
  for(int i=0;i<min(n,m);i++){
    int a=x[n-i-1]-'0';
    int b=y[m-i-1]-'0';
    int sum=a+b+l;
    int rem=sum%10;
    l=sum/10;
    ans+=to_string(rem);
  }
  if(m>n){
    swap(n,m);
    swap(x,y);
  }
  if(n<m){
    int t=m-n;
    for(int i=0;i<t;i++){
      int a=y[t-i-1]-'0';
      int sum=a+l;
      int rem=sum%10;
      l=sum/10;
      ans+=to_string(rem);
    }
  }
  ans+=to_string(l);
  while(ans.back()=='0' && ans.size()>1) ans.pop_back();
  
  reverse(ans.begin(),ans.end());
  return ans;
}

string findSum(string x, string y) {
  // Your code goes here
  string ans="";
  reverse(x.begin(),x.end());
  reverse(y.begin(),y.end());
  int n=x.size();
  int m=y.size();
  
  int i=0;
  int carry=0;
  while(i<n && i<m){
      int a=x[i]-'0';
      int b=y[i]-'0';
      int sum=(a+b+carry)%10;
      ans+=to_string(sum);
      carry=(a+b+carry)/10;
      i++;
  }
  while(i<n){
      int a=x[i]-'0';
      int sum=(a+carry)%10;
      ans+=to_string(sum);
      carry=(a+carry)/10;
      i++;
  }
  while(i<m){
      int a=y[i]-'0';
      int sum=(a+carry)%10;
      ans+=to_string(sum);
      carry=(a+carry)/10;
      i++;
  }
  if(carry!=0) ans+=to_string(carry);
  while(ans.size()>1 && ans.back()=='0'){
      ans.pop_back();
  }
  reverse(ans.begin(),ans.end());
  return ans;
}

int main(){
  
  return 0;
}