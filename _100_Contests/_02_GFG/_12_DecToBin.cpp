#include<bits/stdc++.h>
using namespace std;

void toBinary(int n)
{
    // your code here
    string ans="";
    while(n>0){
        if(n%2==0) ans="0"+ans;
        else ans="1"+ans;
        n/=2;
    }
    cout<<ans;
        
}


int main(){
  
  return 0;
}