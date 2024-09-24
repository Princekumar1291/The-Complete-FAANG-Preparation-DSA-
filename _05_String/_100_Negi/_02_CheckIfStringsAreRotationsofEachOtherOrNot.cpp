Problem Link: https://www.geeksforgeeks.org/problems/check-if-strings-are-rotations-of-each-other-or-not-1587115620/1?page=1&difficulty%255B%255D=-1&category%255B%255D=Strings&sortBy=submissions


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