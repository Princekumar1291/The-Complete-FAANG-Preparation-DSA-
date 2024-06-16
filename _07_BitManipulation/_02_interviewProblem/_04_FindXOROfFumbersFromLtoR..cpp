//problem Link: https://www.geeksforgeeks.org/problems/find-xor-of-numbers-from-l-to-r/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=find-xor-of-numbers-from-l-to-r


#include<bits/stdc++.h>
using namespace std;

int findXor(int n){
  if(n%4==1) return 1;
  else if(n%4==2) return n+1;
  else if(n%4==3) return 0;
  return n;
}
int findXOR(int l, int r) {
    return findXor(l-1)^findXor(r);
}


int main(){
  
  return 0;
}