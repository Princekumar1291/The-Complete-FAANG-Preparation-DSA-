#include<bits/stdc++.h>
using namespace std;

void welcome(string name){
  cout<<"Welcome "<<name<<endl;
}

int main(){
    string name;
    cout<<"Enter Your Name: ";
    getline(cin,name);
    welcome(name);
    return 0;
}