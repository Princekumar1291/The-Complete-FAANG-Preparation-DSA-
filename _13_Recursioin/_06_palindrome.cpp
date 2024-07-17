#include<bits/stdc++.h>
using namespace std;
void palind(string s,bool& ans,int i){
  if(i>s.size()-1/2) return;
  if(s[i]!=s[s.size()-1-i]){
    ans=false;
    return;
  }
  palind(s,ans,i+1);
}
int main(){
  bool ans=true;
  string s="princeecnirp";
  palind(s,ans,0);
  cout<<ans;
  return 0;
}