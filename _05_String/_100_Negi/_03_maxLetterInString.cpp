#include<bits/stdc++.h>
using namespace std;

char getMaxOccuringChar(string str){
  unordered_map<char,int> ump;
  for(int i=0;i<str.size();i++){
      ump[str[i]]++;
  }
  
  int temp=0;
  char c;
  for(auto ele:ump){
    if(ele.second>temp){
      temp=ele.second;
      c=ele.first;
    }
    if(ele.second==temp && (ele.first<c)){
      c=ele.first;
    }
  }
  return c;
}

int main(){
  
  return 0;
}