// Problem Link: https://leetcode.com/problems/minimum-bit-flips-to-convert-number/


#include<bits/stdc++.h>
using namespace std;

string intToBin(int n){
    string ans="";
    while(n>0){
        int t=n%2;
        string p=to_string(t);
        ans=p+ans;
        n/=2;
    }
    return ans;
}
int minBitFlips(int start, int goal) {
    string s1=intToBin(start);
    string s2=intToBin(goal);
    int ans=0;
    int n=s1.size();
    int m=s2.size();
    reverse(s1.begin(),s1.end());
    reverse(s2.begin(),s2.end());
    for(int i=0;i<min(n,m);i++){
        if(s1[i]!=s2[i]) ans++;
    }
    if(m>n){
        swap(s1,s2);
        swap(n,m);
    }
    for(int i=min(n,m);i<max(m,n);i++){
        if(s1[i]=='1') ans++;
    }
    return ans;
}


int main(){
  
  return 0;
}



int minBitFlips(int start, int goal) {
  int temp=start^goal;
  int ans=__builtin_popcount(temp);
  return ans;
}