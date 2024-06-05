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

string addStrings(string num1, string num2) {
  reverse(num1.begin(),num1.end());
  reverse(num2.begin(),num2.end());
  int n=num1.size();
  int m=num2.size();

  string ans="";
  int carry=0;
  for(int i=0;i<min(n,m);i++){
    int a=num1[i]-'0';
    int b=num2[i]-'0';
    int temp=a+b+carry;
    carry=temp/10;
    ans+=to_string(temp%10);
  }
  if(m>n){
    swap(n,m);
    swap(num1,num2);
  }
  if(n>m){
    for(int i=m;i<n;i++){
        int a=num1[i]-'0';
        int temp=a+carry;
        carry=temp/10;
        ans+=to_string(temp%10);
    }
  }
  ans+=to_string(carry);
  while(ans.back()=='0' && ans.size()>1) ans.pop_back();

  reverse(ans.begin(),ans.end());
  return ans;
}

int main(){
  
  return 0;
}