#include<bits/stdc++.h>
using namespace std;

int sum(int a,int b){  //a and b is pass by value
  return a+b;
}

int main(){
    int n,m;
    cout<<"Enter first number: ";
    cin>>n;
    cout<<"Enter second number: ";
    cin>>m;

    int res=sum(n,m);
    cout<<"Sum is: "<<res;

    return 0;
}