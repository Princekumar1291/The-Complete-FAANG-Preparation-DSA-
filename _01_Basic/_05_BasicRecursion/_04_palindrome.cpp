#include <bits/stdc++.h>
using namespace std;
bool isPalindrome(string s){
  int i = 0;
  int j = s.size() - 1;
  while (i <= j){
    if (!isalnum(s[i])) i++;
    else if (!isalnum(s[j])) j--;
    else if (tolower(s[i]) != tolower(s[j])) return false;
    else{
      i++;
      j--;
    }
  }
  return true;
}

bool isPalindromeByRecursion(string s,int i,int j){
    if(i>=j) return true;
    if(s[i]!=s[j]) return false;
    return isPalindromeByRecursion(s,i+1,j-1);
}

int main(){
  string st="A man, a plan, a canal: Panama";
  bool check=isPalindrome(st);
  if(check) cout<<"YES"<<endl;
  else cout<<"NO"<<endl;

  bool check2=isPalindromeByRecursion("mam",0,2);
  if(check2) cout<<"YES";
  else cout<<"NO";
  return 0;
}