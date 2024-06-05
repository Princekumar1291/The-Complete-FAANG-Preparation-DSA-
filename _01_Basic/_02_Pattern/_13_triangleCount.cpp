#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int t=1;
    for(int i=1;i<=n;i++){
      for(int j=1;j<=i;j++){
        cout<<t++<<" ";
      }
      cout<<endl;
    }
    return 0;
}