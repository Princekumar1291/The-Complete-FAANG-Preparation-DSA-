// Problem Link: https://www.geeksforgeeks.org/problems/prime-factorization-using-sieve/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=prime-factorization-using-sieve

#include<bits/stdc++.h>
using namespace std;


vector<int> findPrimeFactors(int N) {
  vector<int> v;
  for(int i=2;i<=N;i++){
    if(N==1) break;
    if(N%i==0){
      while(N%i==0) {
        v.push_back(i);
        N/=i;
      }
    }
  }
  return v;
}


vector<int> findPrimeFactors(int N) {
  vector<int> v;
  for(int i=2;i<=sqrt(N);i++){
    if(N==1) break;
    if(N%i==0){
      while(N%i==0) {
        v.push_back(i);
        N/=i;
      }
    }
  }
  if(N!=1) v.push_back(N);
  return v;
}


int main(){
  
  return 0;
}