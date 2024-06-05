#include<bits/stdc++.h>
using namespace std;

string caseSort(string str, int n){
  string s1="";
  string s2="";
  string ans="";
  for(int i=0;i<n;i++){
      if(str[i]>='A' &&str[i]<='Z') s1+=str[i];
      else s2+=str[i];
  }
  sort(s1.begin(),s1.end());
  sort(s2.begin(),s2.end());
  int i=0;
  int j=0;
  
  int k=0;
  while(i<s1.size() && j<s2.size()){
      int a=str[k++];
      if(a>=65&&a<=90) ans+=s1[i++];
      else ans+=s2[j++];
  }
  while(i<s1.size()) ans+=s1[i++];
  while(j<s2.size()) ans+=s2[j++];
  
  return ans;
}

int main(){
  
  return 0;
}