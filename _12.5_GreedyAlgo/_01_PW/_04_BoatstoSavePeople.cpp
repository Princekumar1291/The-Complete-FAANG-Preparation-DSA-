//Problem Link: https://leetcode.com/problems/boats-to-save-people/

#include<bits/stdc++.h>
using namespace std;
int numRescueBoats(vector<int>& p, int l) {
  int n=p.size();
  sort(p.begin(),p.end());
  int i=0,j=n-1;
  int ans=0;
  while(i<=j){
      if(i==j) {
          ans++;
          break;
      }
      if(p[i]+p[j]<=l){
          ans++;
          i++;
          j--;
      }
      else {
          ans++;
          j--;
      }
  }
  return ans;
}
int main(){
  vector<int> p={1,2,3,4,5,6,7,8,9,10};
  int l=5;
  int ans=numRescueBoats(p,l);
  cout<<ans<<endl;
  return 0;
}