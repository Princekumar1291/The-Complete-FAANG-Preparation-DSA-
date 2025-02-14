#include<bits/stdc++.h>
using namespace std;

int helper(char ch){
  if(ch=='I') return 1;
  else if(ch=='V') return 5;
  else if(ch=='X') return 10;
  else if(ch=='L') return 50;
  else if(ch=='C') return 100;
  else if(ch=='D') return 500;
  else if(ch=='M') return 1000;
  return 0;
}
int romanToDecimal(string &str) {
  int n=str.size();
  int ans=0;
  for(int i=0;i<n-1;i++){
    int temp1=helper(str[i]);
    int temp2=helper(str[i+1]);
    if(temp1>=temp2) ans+=temp1;
    else ans-=temp1;
  }
  ans+=helper(str[n-1]);
  return ans;
}

int main(){
  string str="MCMXCIV";
  cout<<romanToDecimal(str);
  return 0;
}
