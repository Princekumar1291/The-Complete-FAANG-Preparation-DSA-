#include<bits/stdc++.h>
using namespace std;

void rev(int& a,int& b){  //a and b is pass by ref
  int temp=a;
  a=b;
  b=temp;
}

int main(){
    int n,m;
    cout<<"Enter first number: ";
    cin>>n;
    cout<<"Enter second number: ";
    cin>>m;

    rev(n,m);
    cout<<"n is: "<<n<<endl;
    cout<<"m is: "<<m<<endl;

    return 0;
}