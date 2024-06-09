#include<bits/stdc++.h>
using namespace std;
int main() {
    string s="Prince,kumar,vill,sareya,,,post,maharajging";
    stringstream ss(s);
    string temp;
    while(getline(ss,temp,',')){
        if(temp!="") cout<<temp<<endl;
    }
}