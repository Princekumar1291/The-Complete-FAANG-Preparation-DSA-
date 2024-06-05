#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    for(int i=1;i<=2*n-1;i++){
      for(int j=1;j<=2*n-1;j++){
      int t=i;
      int b=2*n-i;
      int l=j;
      int r=2*n-j;
      int fin=n-min(min(t,b),min(l,r))+1;
      cout<<fin<<" ";
      }
      cout<<endl;
    }
    return 0;
}