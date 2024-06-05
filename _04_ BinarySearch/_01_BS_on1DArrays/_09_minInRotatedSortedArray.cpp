#include<bits/stdc++.h>
using namespace std;
  
int findMin(vector<int>& nums) {
  int n=nums.size();
  int low=0;
  int high=n-1;
  int minEle=INT_MAX;
  while(low<=high){
      int mid=low+(high-low)/2;
      if(nums[low]<=nums[mid]){
          minEle=min(minEle,nums[low]);
          low=mid+1;
      }
      else{
          minEle=min(minEle,nums[mid]);
          high=mid-1;
      }
  }
  return minEle;
}
  
int main() {
    vector<int> v = {4, 5, 6, 7, 0, 1, 2};
    int result = findMin(v);
    cout << "The minimum element in the rotated sorted array is: " << result << endl;
    return 0;
}