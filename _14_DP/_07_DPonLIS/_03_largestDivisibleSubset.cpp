#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int largestDivisibleSubsetLength(vector<int>& nums) {
    int n = nums.size();
    if (n == 0) return 0;

    sort(nums.begin(), nums.end());

    vector<int> dp(n, 1);
    int maxLen = 1;

    for (int i = 1; i < n; i++) {
        for (int j = 0; j < i; j++) {
            if (nums[i] % nums[j] == 0 && dp[j] + 1 > dp[i]) {
                dp[i] = dp[j] + 1;
            }
        }
        maxLen = max(maxLen, dp[i]);
    }

    return maxLen;
}

int main() {
    vector<int> nums = {1, 2, 4, 8};
    int result = largestDivisibleSubsetLength(nums);

    cout << "Length of the largest divisible subset: " << result << endl;

    return 0;
}