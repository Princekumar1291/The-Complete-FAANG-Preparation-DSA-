#include<bits/stdc++.h>
using namespace std;

vector<int> twoSumBrut(vector<int> &nums, int target){  //O(n2)
  vector<int> v;
  for (int i = 0; i < nums.size(); i++){
    for (int j = i + 1; j < nums.size(); j++){
      if (nums[i] + nums[j] == target) v.assign({i, j});
    }
  }
  return v;
}

vector<int> twoSumOpt(vector<int> &v, int target){ //O(n) , worsecase--> O(n2)
  unordered_map<int, int> mp;
  vector<int> ans;
  for (int i = 0; i < v.size(); i++){
    int rem = target - v[i];
    if (mp.find(rem) != mp.end()){
      ans.push_back(i);
      ans.push_back(mp[rem]);
    }
    mp[v[i]] = i;
  }
  return ans;
}

bool twoSumBy2Pointer(vector<int> v,int target){
  int n=v.size();  //it only check pair exit or not
  sort(v.begin(),v.end());
  int i=0;
  int j=n-1;
  while (i<j){
    int sum=v[i]+v[j];
    if(sum==target) return true;
    else if(sum<target) i++;
    else j--;
  }
  return false;
}

int main(){
  vector<int> nums1 = {2, 7, 11, 15};
  int target1 = 9;
  vector<int> v = twoSumBrut(nums1, target1);
  cout << "Indices for target " << target1 << " : ";
  for (int i : v) cout << i << " ";
  cout << endl;
  return 0;
}