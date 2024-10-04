#include<bits/stdc++.h>
using namespace std;
int factorial(int n){
  if(n==1) return 1;
  return n*factorial(n-1);
}
int main(){
  int n=5;
  int ans=factorial(n);
  cout<<ans<<endl;
  return 0;
}