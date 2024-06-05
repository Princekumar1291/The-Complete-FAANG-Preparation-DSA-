#include <bits/stdc++.h>
using namespace std;

string armstrongNumber(int n){
  int m = n;
  int ans = 0;
  int len = to_string(m).size();
  while (m > 0){
    int rem = m % 10;
    m /= 10;
    ans += pow(rem, len);
  }
  if (n == ans) return "Yes";
  return "No";
}

int main(){
  int n;
  cout<<"Enter n: ";
  cin>>n;

  cout<<armstrongNumber(n);
  return 0;
}