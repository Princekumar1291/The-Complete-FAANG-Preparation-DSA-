// Problem Link: https://www.geeksforgeeks.org/problems/check-whether-k-th-bit-is-set-or-not-1587115620/1


#include<bits/stdc++.h>
using namespace std;


bool checkKthBit(int n, int k){
  if((n&(1<<k))!=0) return true;
  return false;
}




//Set kth bit
// problem Link: https://www.geeksforgeeks.org/problems/set-kth-bit3724/1



int setKthBit(int N, int K){
  return N|(1<<K);
}




//clear the ith bit 
int clearKthBit(int N, int K){
  return N&(~(1<<K));
}


//toggle Ith bit
int toggleKthBit(int n,int k){
  return n^(1<<k);
}

//remove the last set bit
int removeRightMostSetBit(int n){
  return n&(n-1);
}


//check N is power of 2 or not
bool checkPowerOfTwo(int n){
  string s="";
  int temp=n;
  while(n>0){
    s=to_string(n%2)+s;
    n/=2;
  }
  int c=0;
  for(int i=0;i<s.size();i++){
    if(s[i]=='1') c++;
  }
  return c==1?true:false;
}

bool isPowerOfTwo(int n) {
  if(n<=0) return false;
  return !(n&(n-1));
}


//No of set bit
int noOfSetBit(int n){
  int c=0;
  while(n>0){
    if(n%2==1) c++;
    n/=2;
  }
  return c;
}
int noOfSetBit2(int n) {
    int c = 0;
    while (n > 0) {
        c += (n & 1);  // Adds 1 to c if the least significant bit is 1
        n >>= 1;
    }
    return c;
}
int noOfSetBit3(int n) {
    int c = 0;
    while (n > 0) {
        c++;
        n=n&(n-1);
    }
    return c;
}



int main(){ 
  cout<<noOfSetBit3(16);
  return 0;
}