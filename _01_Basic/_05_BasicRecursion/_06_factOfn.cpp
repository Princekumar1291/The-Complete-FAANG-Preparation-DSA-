//Problem Link: https://www.geeksforgeeks.org/problems/find-all-factorial-numbers-less-than-or-equal-to-n3548/0?problemType=functional&difficulty%255B%255D=-1&page=1&query=problemTypefunctionaldifficulty%255B%255D-1page1

#include<bits/stdc++.h>
using namespace std;

int sum(int n){
  if(n==1) return 1;
  return n*sum(n-1);
}

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    cout<<sum(n);
    return 0;
}