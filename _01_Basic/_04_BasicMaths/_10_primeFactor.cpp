#include<bits/stdc++.h>
using namespace std;
void allPrime(vector<int>& ans,int n){
  for(int i=2;i<=sqrt(n);i++){
    if(n%i==0){
      while(n%i==0){
        ans.push_back(i);
        n/=i;
      }
    }
  }
  if(n>1) ans.push_back(n);
}
int main(){
  cout<<"Enter a number: ";
  int n;
  cin>>n;
  vector<int> ans;
  allPrime(ans,n);
  for(int ele:ans)cout<<ele<<" ";cout<<endl;
  return 0;
}