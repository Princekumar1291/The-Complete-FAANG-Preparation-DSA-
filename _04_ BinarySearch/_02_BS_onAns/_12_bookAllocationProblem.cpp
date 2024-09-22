#include<bits/stdc++.h>
using namespace std;

int totSum(vector<int>& arr){
    int sum = 0;
    for(int ele : arr) sum += ele;
    return sum;
}

int isPosPages(int p, vector<int>& v) {
    int count = 1; // Start with 1 partition
    int sum = 0;
    int n = v.size();

    for(int i = 0; i < n; i++) {
        sum += v[i];
        if(sum > p) {
            count++;
            sum = v[i];
        } 
    }
    return count;
}

int findPages(vector<int>& arr, int n, int m) {
    if(m > n) return -1; // More students than books is impossible
    int low = *max_element(arr.begin(), arr.end()); 
    int high = totSum(arr);
    int ans = -1;

    while(low <= high) { 
        int mid = low + (high - low) / 2;
        if(isPosPages(mid, arr)<=m) {
            ans = mid; 
            high = mid - 1;
        }
        else low = mid + 1;
    }
    return ans;
}

int main(){
  vector<int> arr = {10, 20, 30, 40};
  int n = arr.size();
  int m = 2;
  int ans = findPages(arr, n, m);
  cout << ans;
  return 0;
}