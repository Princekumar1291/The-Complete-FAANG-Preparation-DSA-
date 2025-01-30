//Problem Link: https://leetcode.com/problems/minimum-penalty-for-a-shop/description/


#include<bits/stdc++.h>
using namespace std;

int bestClosingTime(string cst) {
  int n=cst.size();

  int c=0;
  vector<int> prevN(n+1);
  prevN[0]=0;
  for(int i=1;i<=n;i++){
      if(cst[i-1]=='N') c++;
      prevN[i]=c;
  }


  vector<int> nextY(n+1);
  nextY[n]=0;
  c=0;
  for(int i=n-1;i>=0;i--){
      if(cst[i]=='Y') c++;
      nextY[i]=c;
  }

  for(int ele:prevN) cout<<ele<<" ";cout<<endl;
  for(int ele:nextY) cout<<ele<<" ";cout<<endl;

  int mini=INT_MAX;
  int ans;
  for(int i=0;i<=n;i++){
      int sum=prevN[i]+nextY[i];
      if(sum<mini){
          mini=min(mini,sum);
          ans=i;
      }
  }

  return ans;
}


int main(){
    string customers = "YYNY";
    cout << "Best closing time: " << bestClosingTime(customers) << endl;
    return 0;
}
