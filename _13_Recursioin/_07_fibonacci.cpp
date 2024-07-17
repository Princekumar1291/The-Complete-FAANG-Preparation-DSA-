#include<bits/stdc++.h>
using namespace std;
int fibo(int n){
  if(n<=1) return n;
  return fibo(n-1)+fibo(n-2);
}
int main(){
  int ans=fibo(5);
  cout<<ans<<endl;
  return 0;
}


// TC--> O(n2)  exponintail in nature 