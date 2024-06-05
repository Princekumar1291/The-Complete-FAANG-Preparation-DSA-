#include <bits/stdc++.h>
using namespace std;
void moveZeroes(vector<int> &nums){
  int j = 0;
  int n = nums.size();
  for (int i = 0; i < n; i++){
    if (nums[i] != 0){
      nums[j] = nums[i];
      j++;
    }
  }
  while (j < n){
    nums[j] = 0;
    j++;
  }
}
int main(){
  vector<int> v = {0, 12, 0, 16, 25, 33};
  int n= v.size();
  cout << "Given array is \n";
  for (int i = 0; i < n; i++) cout << v[i] << " ";
  cout << endl<<"After rotation : ";
  moveZeroes(v);
  for(auto ele:v) cout<<ele<<" ";
  return 0;
}