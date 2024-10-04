#include<bits/stdc++.h>
using namespace std;
bool isPalindrome(string s, int start, int end){
  if(start>=end) return true;
  if(s[start]!=s[end]) return false;
  return isPalindrome(s,start+1,end-1);
}
int main(){
  string s="madam";
  int start=0;
  int end=s.size()-1;
  cout<<isPalindrome(s,start,end);
  return 0;
} 