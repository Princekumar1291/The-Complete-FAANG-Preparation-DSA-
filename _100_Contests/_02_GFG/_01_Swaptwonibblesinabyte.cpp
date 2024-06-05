#include<bits/stdc++.h>
using namespace std;

int swapNibbles(int n) {
  // code here
  int n1=n;
  int n2=n;
  
  n1=(n1&15) <<4;
  n2=(n2&240) >>4;
  return n1|n2;
}

int main(){
  int ans=swapNibbles(100);
  cout<<ans;
  return 0;
}