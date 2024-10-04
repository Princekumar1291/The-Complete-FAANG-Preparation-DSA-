#include<bits/stdc++.h>
using namespace std;
int sumOfNnumber(int n){  //by returning
  if(n==1) return 1;
  return n+sumOfNnumber(n-1);
}
void sumOfNnumber2(int n,int& sum){  //parameterised
  if(n==0) return;
  sum+=n;
  sumOfNnumber2(n-1,sum);
}
int main(){
  int n=10;
  int sum=sumOfNnumber(n);
  cout<<sum<<endl;
  int sum2=0;
  sumOfNnumber2(n,sum2);
  cout<<sum2<<endl;
  return 0;
}