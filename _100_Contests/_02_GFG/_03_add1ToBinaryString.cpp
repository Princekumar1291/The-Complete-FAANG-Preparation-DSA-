#include<bits/stdc++.h>
using namespace std;

string binaryNextNumber(string s) {
  // code here.
  string ans="";
  int n=s.size();
  int carry=0;
  reverse(s.begin(),s.end());
  for(int i=0;i<n;i++){
      int a=s[i]-'0';
      int sum=0;
      if(i==0) sum=a+1;
      else sum=a+carry;
      if(sum==0){
        carry=0;
        ans+="0";
          
      }else if(sum==1){
        carry=0;
        ans+="1";
      }else if(sum==2){
        carry=1;
        ans+="0";
      }
  }
  ans+=to_string(carry);
  while(ans.back()=='0') ans.pop_back();
  reverse(ans.begin(),ans.end());
  return ans;
}

int main(){
  
  return 0;
}