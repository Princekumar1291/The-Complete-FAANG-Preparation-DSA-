// Problem Link: https://takeuforward.org/strivers-a2z-dsa-course/strivers-a2z-dsa-course-sheet-2

#include<bits/stdc++.h>
using namespace std;


void print_divisors(int n) {
  // Code here.
  vector<int> v1;
  vector<int> v2;
  for(int i=1;i<sqrt(n);i++){
    if(n%i==0){
      v1.push_back(i);
      v2.push_back(n/i);
    }
  }
  int t=sqrt(n);
  if(t*t==n) v1.push_back(t);
  
  for(int i=0;i<v1.size();i++){
    cout<<v1[i]<<" ";
  }
  for(int i=v2.size()-1;i>=0;i--){
    cout<<v2[i]<<" ";
  }
}

int main(){
  
  return 0;
}