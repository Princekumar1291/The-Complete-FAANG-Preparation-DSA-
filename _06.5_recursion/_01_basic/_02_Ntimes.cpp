#include<bits/stdc++.h>
using namespace std;
void f(int n){
  if(n==0) return ;
  cout<<"Prince"<<endl;
  f(n-1);
}
int main(){
  int n=12;
  f(n);
  return 0;
}