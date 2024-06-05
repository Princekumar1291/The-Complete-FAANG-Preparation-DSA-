#include<bits/stdc++.h>
using namespace std;

string isPossible(int a, int b, int c) {
  if((a + b) > c && (b + c) > a && (c + a) > b) return "YES";
  return "NO";
}

int main(){
  
  return 0;
}