#include <bits/stdc++.h>
using namespace std;
int singleNumberBrut(vector<int> &v){
  int n = v.size();
  for (int i = 0; i < n; i++){
    int temp=1;
    for(int j=0;j<n;j++){
      if(v[i]==v[j] && i!=j) {
        temp++;
      }
    }
    if(temp==1) return v[i];
  }
  return -1;
}
int singleNumberBetter(vector<int> &v){
  int n = v.size();
  unordered_map<int,int> mp;
  for (int i = 0; i < n; i++){
    mp[v[i]]++;
  }
  for(auto ele:mp) {
    if(ele.second!=2) return ele.first;
  }
  return -1;
}
int singleNumberOptimal(vector<int> &nums){
  int temp = 0;
  for (int i = 0; i < nums.size(); i++){
    temp = temp ^ nums[i];
  }
  return temp;
}
int main(){
  vector<int> nums {9,9,4,1,3,5,3,4,1};
  int ans=singleNumberOptimal(nums);
  cout<<ans<<endl;
  return 0;
}

// 0^n= n
// n^n=0