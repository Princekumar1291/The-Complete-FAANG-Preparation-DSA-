//Problem link: https://www.geeksforgeeks.org/problems/rectangles-in-a-circle0457/1


#include<bits/stdc++.h>
using namespace std;

int rectanglesInCircle(int r) {
  int d=2*r;
  int ans=0;
  for(int i=1;i<=d;i++){
    for(int j=1;j<=d;j++){
      if(i*i+j*j<=d*d){
        ans++;
      }
      else break;
    }
  }
  return ans;
}


int main(){
  
  return 0;
}