#include<bits/stdc++.h>
using namespace std;
int main(){
    string st;
    cout<<"Enter a string: ";
    getline(cin,st);
    int arr[256]={0};
    for(int i=0;i<st.size();i++){
      char ch=tolower(st[i]);
      arr[ch]++;
    }

    for(int i=97;i<=122;i++){
      cout<<(char)i<<" repetation is :"<<arr[i]<<endl;
    }

    return 0;
}