#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int m=n;
    int count=0;
    while(n>0){
        int rem=n%10;
        n/=10;
        count++;
    }
    int count2=(log10(m)+1);
    cout<<count<<endl;
    cout<<count2<<endl;
    
    return 0;
}