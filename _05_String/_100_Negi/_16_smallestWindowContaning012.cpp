#include<bits/stdc++.h>
using namespace std;

int smallestSubstring(string s) {
  // Code here
  int n=s.size();
  int arr[3]={0};
  for(int i=0;i<n;i++){
    if(s[i]=='0') arr[0]++;
    else if(s[i]=='1') arr[1]++;
    else if(s[i]=='2') arr[2]++;
  }
  
  for(int i=0;i<3;i++){
    if(arr[i]==0) return -1;
  }
  
  int ans=n;
  unordered_map<char,int> mp;
  for(int i=0;i<n;i++){
    mp[s[i]]=i;
    if(mp.size()==3){
      int a=mp['1'];
      int b=mp['2'];
      int c=mp['0'];
      int maxi=max(a,max(b,c));
      int mini=min(a,min(b,c));
      ans=min(ans,maxi-mini+1);
    }
  }
  return ans;
}

int main(){
  
  return 0;
}