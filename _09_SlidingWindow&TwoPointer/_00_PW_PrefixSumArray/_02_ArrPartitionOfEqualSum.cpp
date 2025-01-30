//Link: No Link

#include<bits/stdc++.h>
using namespace std;
int main(){
  vector<int> v={9,8,7,6,5,5,6,7,8,9};
  int n=v.size();
  vector<int> prefSum(n);
  int sum=0;
  for(int i=0;i<n;i++){
    sum+=v[i];
    prefSum[i]=sum;
  }

  for(int i=0;i<n-1;i++){
    if(prefSum[i]==(prefSum[n-1]-prefSum[i])){
      cout<<"Yes"<<endl;
      cout<<prefSum[i]<<" "<<prefSum[n-1]-prefSum[i];
      break;
    }
  }
  return 0;
}