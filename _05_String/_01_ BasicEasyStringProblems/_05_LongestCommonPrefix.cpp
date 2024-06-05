#include<bits/stdc++.h>
using namespace std;

string longestCommonPrefix(vector<string>& str) {
  int n=str.size();
  if(n==1) return str[0];
  sort(str.begin(),str.end());

  string temp1=str[0];
  string temp2=str[n-1];

  int t1=temp1.size();
  int t2=temp2.size();

  string ans="";
  cout<<temp1<<" "<<temp2<<endl;
  for(int i=0;i<min(t1,t1);i++){
    if(temp1[i]==temp2[i]) ans+=temp1[i];
    else break;
  }
  return ans;
}

int main(){
  
  return 0;
}