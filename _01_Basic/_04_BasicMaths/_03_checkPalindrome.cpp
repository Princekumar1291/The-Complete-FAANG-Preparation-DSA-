#include<bits/stdc++.h>
using namespace std;

void palindrome(int n){
  string s1=to_string(n);
  string s2=s1;
  reverse(s2.begin(),s2.end());
  if(s1==s2) cout<<"Palindrom number";
  else cout<<"Not palindrom number";
}

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    palindrome(n);
    return 0;
}