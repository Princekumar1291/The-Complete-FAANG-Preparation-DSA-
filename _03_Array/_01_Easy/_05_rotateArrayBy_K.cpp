#include<bits/stdc++.h>
using namespace std;
void rotateSection(vector<int> &v, int low, int high){
  while (low < high){
    swap(v[low], v[high]);
    low++;
    high--;
  }
}
void rotate(vector<int> &nums, int k){
  int n = nums.size() - 1;
  k = k % (n + 1);
  int mid = n - k;
  rotateSection(nums, 0, mid);
  rotateSection(nums, mid + 1, n);
  rotateSection(nums, 0, n);
}
int main(){
  vector<int> v = {12, 12, 16, 16, 25, 33};
  int n= v.size();
  cout << "Given array is \n";
  for (int i = 0; i < n; i++) cout << v[i] << " ";
  cout << endl<<"After rotation : ";
  rotate(v,1);
  for(auto ele:v) cout<<ele<<" ";

  return 0;
}
