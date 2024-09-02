#include <bits/stdc++.h>
using namespace std;

vector<int> rearrangeArray(vector<int> &nums){
  int n = nums.size();
  vector<int> ans(n);
  int j = 0;
  int k = 1;
  for (int i = 0; i < n; i++){
    if (nums[i] >= 0){
      ans[j] = nums[i];
      j += 2;
    }
    else{
      ans[k] = nums[i];
      k += 2;
    }
  }
  return ans;
}





class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();
        int posIndex = 0, negIndex = 1;

        while (posIndex < n && negIndex < n) {
            // Find the next positive number that is out of place
            while (posIndex < n && nums[posIndex] > 0) {
                posIndex += 2;
            }

            // Find the next negative number that is out of place
            while (negIndex < n && nums[negIndex] < 0) {
                negIndex += 2;
            }

            // Swap the out-of-place positive and negative numbers
            if (posIndex < n && negIndex < n) {
                swap(nums[posIndex], nums[negIndex]);
            }
        }
        return nums;
    }
};







int main() {
    vector<int> nums = {3, 1, -2, -5, 2, -4};
    vector<int> result = rearrangeArray(nums);
    
    cout << "Rearranged array: ";
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}