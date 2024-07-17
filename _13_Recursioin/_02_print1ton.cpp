#include<bits/stdc++.h>
using namespace std;
void print(int n){
  if(n<0) return;
  print(n-1);
  cout<<n<<" ";
}


//this is backtracking
void print2(int n){
  if(n==0) return;
  cout<<n<<" ";
  print2(n-1);
}
int main(){
  print2(8);
  return 0;
}
