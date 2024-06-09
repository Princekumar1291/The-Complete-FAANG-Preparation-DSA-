// Problem Link: https://www.geeksforgeeks.org/problems/print-n-to-1-without-loop/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=print-n-to-1-without-loop
#include<bits/stdc++.h>
using namespace std;

void printNumber(int i,int n){  //backtracking
  if(i>n) return ;
  printNumber(i+1,n);
  cout<<i<<" ";    
}

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    printNumber(1,n);

    return 0;
}