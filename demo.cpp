#include<bits/stdc++.h>
using namespace std;
bool isPalindrome(string s){

}
int main(){
  vector<int> v={1,2,3,4,5};
  int k=2;
  // k=v.size()-k;
  reverse(v.begin(),v.begin()+k);
  reverse(v.begin()+k,v.end());
  reverse(v.begin(),v.end());
  for(auto ele:v) cout<<ele<<" ";
  return 0;
}



//4 5 1 2 3 
//3 4 5 1 2 