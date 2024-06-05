#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    for(int i=1;i<=n;i++){
      for(char j='A';j<=i+65-1;j++){
        cout<<j<<" ";
      }
      cout<<endl;
    }
    return 0;
}