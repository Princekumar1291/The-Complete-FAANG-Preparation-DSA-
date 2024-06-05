#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    for(int i=1;i<=n;i++){
      for(int j=1;j<=n-i;j++){
        cout<<" ";
      }
        int t=1;
        int k=64;
      for(int j=1;j<=2*i-1;j++){
        if(t++<=(2*i)/2) {
          cout<<char(++k);
        }
        else{
          cout<<char(--k);
        }
      }
      cout<<endl;
    }
    return 0;
}