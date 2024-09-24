#include<bits/stdc++.h>
using namespace std;
bool areRotations(string s1,string s2){
  string s=s1+s1;
  if(s.find(s2)!=-1) return true;
  return false;
}
int main(){
  
  return 0;
} 