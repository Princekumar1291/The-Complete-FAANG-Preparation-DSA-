#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cout<<"Enter a number: ";
  cin>>n;
  int t=1;
  for(int i=1;i<=n;i++){
    if(i%2==0) t=0;
    else t=1;
    for(int j=1;j<=i;j++){
      cout<<t<<" ";
      if(t==0) t=1;
      else t=0;
    }
    cout<<endl;
  }
    return 0;
}