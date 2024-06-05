#include <bits/stdc++.h>
using namespace std;
int findMaxConsecutiveOnes(vector<int> &v){
  int n = v.size();
  int mxCount = 0;
  int temp = 0;
  for (int i = 0; i < n; i++){
    if (v[i] == 1){
      temp++;
      mxCount = max(mxCount, temp);
    }
    else temp = 0;
  }
  return mxCount;
}
int main(){
  vector<int> nums {9,6,4,2,3,5,7,0,1};
  int ans=findMaxConsecutiveOnes(nums);
  cout<<ans<<endl;
  return 0;
}

// 0^n= n
// n^n=0