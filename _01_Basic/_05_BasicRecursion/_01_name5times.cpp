#include<bits/stdc++.h>
using namespace std;

void namePrint(int n){  //time compx O(n)
  if(n==0) return ;     //stack space O(n)
  cout<<"Prince"<<endl;
  namePrint(n-1);
}

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    namePrint(n);
    return 0;
}