#include<bits/stdc++.h>
using namespace std;
bool isAnagram(string& s1,string& s2){
  unordered_map<char,int> mp;
  int n=s1.size();
  int m=s2.size();
  if(n!=m) return false;
  for(char ch:s1) mp[ch]++;
  for(char ch:s2) mp[ch]--;
  for(auto ele:mp) if(ele.second!=0) return false;
  cout<<mp.size()<<endl;
  return true;
}
int nTOconvertAnagram(string& s1,string& s2){  //we can delete char from any string
  unordered_map<char,int> mp;
  int n=s1.size();
  int m=s2.size();
  for(char ch:s1) mp[ch]++;
  for(char ch:s2) mp[ch]--;
  int ans=0;
  for(auto ele:mp) ans+=abs(ele.second);
  return ans;
}
int main(){
  string s1,s2;
  cout<<"Enter String1: ";
  cin>>s1;
  cout<<"Enter String2: ";
  cin>>s2;
  bool ans=isAnagram(s1,s2);
  if(ans) cout<<"Is anagram"<<endl;
  else cout<<"Is not anagram"<<endl;
  int ans2=nTOconvertAnagram(s1,s2);
  cout<<ans2<<endl;
  return 0;
}