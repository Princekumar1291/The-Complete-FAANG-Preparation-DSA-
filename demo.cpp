#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> findSubsets(const vector<int>& nums) {
    int n = nums.size();
    int totalSubsets = 1 << n;
    vector<vector<int>> subsets;

    for (int i = 0; i < totalSubsets; i++) {
        vector<int> currentSubset;
        for (int j = 0; j < n; j++) {
            if (i & (1 << j)) {
                currentSubset.push_back(nums[j]);
            }
        }
        subsets.push_back(currentSubset);
    }

    return subsets;
}

int main() {
    vector<int> nums = {1, 2, 3};
    vector<vector<int>> subsets = findSubsets(nums);

    for (const auto& subset : subsets) {
        for (int num : subset) {
            cout << num << " ";
        }cout << endl;
    }

    return 0;
}
