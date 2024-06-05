#include<bits/stdc++.h>
using namespace std;

int revNumber(int n){
  int revDigit=0;
  while(n>0){
    int rem=n%10;
    n/=10;
    revDigit=revDigit*10+rem;
  }
  return revDigit;
}

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int digit=revNumber(n);
    cout<<digit;
    return 0;
}