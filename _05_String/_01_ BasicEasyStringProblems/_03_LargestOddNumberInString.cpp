//Problem Link: https://leetcode.com/problems/largest-odd-number-in-string/description/


#include<bits/stdc++.h>
using namespace std;

string largestOddNumber(string num) {
  while(num.size()>0){
    int t=num.back()-'0';
    if(t%2==0) num.pop_back();
    else return num;
  }
  return "";
}

int main(){
  
  return 0;
}