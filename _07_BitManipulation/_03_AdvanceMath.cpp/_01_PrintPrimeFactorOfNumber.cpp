// Problem Link: https://www.geeksforgeeks.org/problems/prime-factors5052/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=Prime-Factors


#include<bits/stdc++.h>
using namespace std;

vector<int>AllPrimeFactors(int N) {
  // Code here
  vector<int> v;
  for(int i=2;i<=N;i++){
    if(N%i==0){
      v.push_back(i);
      while(N%i==0){
        N/=i;
      }
    }
  }
  return v;
}

int main(){
  
  return 0;
}