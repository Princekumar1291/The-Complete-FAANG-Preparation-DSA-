#include<bits/stdc++.h>
using namespace std;

int lengthOfLastWord(string s) {
  reverse(s.begin(),s.end());
  stringstream ss(s);
  string temp;
  while(ss>>temp){
    return temp.size();
  }
  return 0;
}

int main(){
  
  return 0;
}