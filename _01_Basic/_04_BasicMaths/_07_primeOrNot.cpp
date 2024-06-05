#include<bits/stdc++.h>
using namespace std;

bool primeOrNot(int n){
  if(n==0 || n==1) return false;
  for(int i=2;i*i<=n;i++){
    if(n%i==0) return false;
  }
  return true;
}

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    bool check=primeOrNot(n);
    if(check) cout<<"Prime";
    else cout<<"Not Prime";
    return 0;
}