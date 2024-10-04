#include<bits/stdc++.h>
using namespace std;
void f(int n){ //backtracking
  if(n==0) return;
  f(n-1);
  cout<<n<<" ";
}
void f2(int n){  
  if(n==0) return ;
  cout<<n<<" ";
  f2(n-1);
}
int main(){
  int n=12;
  f(n);cout<<endl;
  f2(n);
  return 0;
}