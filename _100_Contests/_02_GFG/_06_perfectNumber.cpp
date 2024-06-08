#include<bits/stdc++.h>
using namespace std;

bool checkPerfectNumber(int n) {
  int sum=0;
  if(n==1 ) return false;
  for(int i=1;i<=sqrt(n);i++){
    if(n%i==0 && i*i!=n){
      sum+=i;
      if(n/i!=n)sum+=(n/i);
    }
    else if(n%i==0 && i*i==n) sum+=i;
  }
  if(sum==n) return true;
  return false;
}

int main(){
  
  return 0;
}