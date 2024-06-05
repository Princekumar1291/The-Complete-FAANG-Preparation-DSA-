#include<bits/stdc++.h>
using namespace std;

int subarraySum(vector<int>& v, int k) {
  int n=v.size();
  int c=0;
  for(int i=0;i<n;i++){
      int sum=0;
      for(int j=i;j<n;j++){
          sum+=v[j];
          if(sum==k) c++;
      }
  }
  return c;
}

int subarraySum(vector<int>& v, int k) {
  int n=v.size();
  int c=0;
  int sum=0;
  unordered_map<int,int> mp;
  for(int i=0;i<n;i++){
      mp[sum]++;
      sum+=v[i];
      int remove=sum-k;
      if(mp.find(remove)!=mp.end()){
          c+=mp[remove];
      }
  }
  return c;
}

int main() {
    vector<int> arr = {1, 2, 3,-3,1,1,1, 4,2, -3};
    int k = 3;
    cout << "Number of subarrays with sum " << k << " is: " << subarraySum(arr, k) << endl;
    return 0;
}