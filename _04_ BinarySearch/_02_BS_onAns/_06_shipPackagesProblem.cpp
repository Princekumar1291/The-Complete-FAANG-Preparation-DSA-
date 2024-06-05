#include<bits/stdc++.h>
using namespace std;

int helper(vector<int> v, int weight) {
  int n = v.size();
  int ans = 0;
  int sum = 0;
  for (int i = 0; i < n; i++) {
      sum += v[i];
      if (sum > weight) {
          ans++;
          sum = v[i];
      }
  }
  ans++; // For the last sub-array
  return ans;
}

int shipWithinDays(vector<int>& weights, int days) {
  int sum = 0;
  for (auto ele : weights) sum += ele;
  int low = *max_element(weights.begin(), weights.end());
  int high = sum;
  int ans = -1;
  while (low <= high) {
      int mid = low + (high - low) / 2;
      int temp = helper(weights, mid);
      if (temp > days) low = mid + 1;
      else {
          ans = mid;
          high = mid - 1;
      }
  }
  return ans;
}

int main(){
  
  return 0;
}