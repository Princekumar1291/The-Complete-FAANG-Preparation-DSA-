// Problem Link: https://www.geeksforgeeks.org/problems/print-1-to-n-without-using-loops-1587115620/1

#include<bits/stdc++.h>
using namespace std;

void printNumber(int i,int n){
  if(i>n) return ;
  cout<<i<<" ";
  printNumber(i+1,n);
}

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    printNumber(1,n);

    return 0;
}