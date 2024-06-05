#include <bits/stdc++.h>
using namespace std;

int subarraysWithXorKBrut(vector<int> a, int k) {
    int n = a.size(); //size of the given array.
    int cnt = 0;

    // Step 1: Generating subarrays:
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {

            //step 2:calculate XOR of all
            // elements:
            int xorr = 0;
            for (int K = i; K <= j; K++) {
                xorr = xorr ^ a[K];
            }

            // step 3:check XOR and count:
            if (xorr == k) cnt++;
        }
    }
    return cnt;
}

int subarraysWithXorKBetter(vector<int> a, int k) {
  int n = a.size(); //size of the given array.
  int cnt = 0;
  for (int i = 0; i < n; i++) {
      int xorr = 0;
      for (int j = i; j < n; j++) {
          xorr = xorr ^ a[j];
          if (xorr == k) cnt++;
      }
  }
  return cnt;
}

int subarraysWithXorKOpt(vector<int> v,int k){
  int n=v.size();
  unordered_map<int,int> mp;
  int count=0;
  int xSum=0;
  mp[0]++;
  for(int i=0;i<n;i++){
    xSum=xSum^v[i];
    int rem=xSum^k;
    count+=mp[rem];
  }
  return count;
}

int main(){
    vector<int> a = {4, 2, 2, 6, 4};
    int k = 6;
    int ans = subarraysWithXorKBrut(a, k);
    cout << "The number of subarrays with XOR k is: "<< ans << "\n";
    return 0;
}

