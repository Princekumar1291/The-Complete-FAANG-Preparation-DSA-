#include<bits/stdc++.h>
using namespace std;

long binarySubstringBrut(int n, string s){
  int count=0;
  for(int i=0;i<n;i++){
    string temp(1,s[i]);
    for(int j=i+1;j<n;j++){
      temp+=s[j];
      if(temp[0]=='1' && temp.back()=='1') count++;
    }
  }
  return count;
}

//1'sC2
long binarySubstring(int n, string a){
  int c1=0;
  for(int i=0;i<n;i++){
    if(a[i]=='1') c1++;
  }
  return c1*(c1-1)/2;    // NcR 4C2
}

int main(){
  
  return 0;
}