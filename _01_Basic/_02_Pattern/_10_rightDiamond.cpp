#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    for(int i=1;i<=n;i++){
      for(int j=1;j<=i;j++){
        cout<<"* ";
      }
      cout<<endl;
    }

    int t=n-1;
    for(int i=1;i<=t;i++){
      for(int j=1;j<=t-i+1;j++){
        cout<<"* ";
      }
      cout<<endl;
    }
    return 0;
}