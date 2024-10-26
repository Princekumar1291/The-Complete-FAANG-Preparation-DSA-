//Problem Link: https://leetcode.com/problems/3sum-closest/


#include <bits/stdc++.h>
using namespace std;
int threeSumClosest(vector<int>& arr, int target) {
    sort(arr.begin(), arr.end());
    int n = arr.size();
    int ans = arr[0] + arr[1] + arr[2];
    for (int i = 0; i < n - 2; i++) {
        int j = i + 1;
        int k = n - 1;
        while (j < k) {
            int sum = arr[i] + arr[j] + arr[k];
            if (abs(sum - target) < abs(target - ans)) ans = sum;
            if (sum < target) j++;
            else k--; 
        }
    }
    return ans;
}

int main(){
    vector<int> arr = {-1, 2, 1, -4};
    int target = 1;
    cout<<threeSumClosest(arr, target);
    return;
}