// Problem Link: https://www.geeksforgeeks.org/problems/sum-of-all-divisors-from-1-to-n4738/1

#include<bits/stdc++.h>
using namespace std;
void printAllFact(int n){
  for(int i=1;i<=sqrt(n);i++){
    if(n%i==0){
      if(i==n/i) cout<<i<<endl;
      else cout<<i<<" "<<n/i<<endl;
    }
  }
}
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    printAllFact(n);   //O(√n)
    return 0;
}