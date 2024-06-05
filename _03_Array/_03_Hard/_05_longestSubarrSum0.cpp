#include<bits/stdc++.h>
using namespace std;

int maxLen(vector<int>&v, int n){   
  unordered_map<int,int> mp;
  int sum=0;
  int l,r;
  int ans=0;
  for(int i=0;i<n;i++){
      sum+=v[i];
      int rem=sum;
      if(sum==0) ans=i+1;
      else if(mp.find(rem)!=mp.end()){
          l=mp[rem];
          r=i;
          ans=max(ans,r-l);
      }
      if(mp.find(sum)==mp.end()){
          mp[sum]=i;
      }
  }
  return ans;
}


int main() {
    vector<int> arr = {15, -2, 2, -8, 1, 7, 10, 23};
    int n = arr.size();
    cout << "Maximum length of subarray with 0 sum: " << maxLen(arr, n) << endl;
    return 0;
}