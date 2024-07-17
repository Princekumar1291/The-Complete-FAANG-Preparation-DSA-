#include<bits/stdc++.h>
using namespace std;
void printAllSubsequence(vector<int>& v,vector<int>& temp,int i,int n){
  if(i==n) {
    for(auto ele:temp)cout<<ele<<" ";
    cout<<endl;
    return;
  }
  temp.push_back(v[i]);
  printAllSubsequence(v,temp,i+1,n);
  temp.pop_back();
  printAllSubsequence(v,temp,i+1,n);
}
int main(){
  vector<int> v={1,2,3};
  int n=v.size();
  vector<int> temp;
  printAllSubsequence(v,temp,0,n);
  return 0;
}


// TC--> O(2^n)
// Stack Space--> O(n)