#include<bits/stdc++.h>
using namespace std;

double myPow(double x, int n) {
    long double ans=1;
    int t=n;
    n=abs(n);
    while(n>0){
        if(n%2==1){
            ans=ans*x;
            n--;
        }
        else{
            x=x*x;
            n/=2;
        }
    } 
    if(t>0) return ans;
    return 1/ans;
}


int main(){
  
  return 0;
}