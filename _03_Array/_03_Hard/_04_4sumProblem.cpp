//Problem Link: https://leetcode.com/problems/4sum/description/

#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> fourSumBrut(vector<int> &nums, int target){
  int n = nums.size(); // size of the array
  set<vector<int>> st;

  // checking all possible quadruplets:
  for (int i = 0; i < n; i++){
    for (int j = i + 1; j < n; j++){
      for (int k = j + 1; k < n; k++){
        for (int l = k + 1; l < n; l++){
          // taking bigger data type
          // to avoid integer overflow:
          long long sum = nums[i] + nums[j];
          sum += nums[k];
          sum += nums[l];

          if (sum == target){
            vector<int> temp = {nums[i], nums[j], nums[k], nums[l]};
            sort(temp.begin(), temp.end());
            st.insert(temp);
          }
        }
      }
    }
  }
  vector<vector<int>> ans(st.begin(), st.end());
  return ans;
}

vector<vector<int>> fourSumBetter(vector<int> &nums, int target){
  int n = nums.size(); 
  set<vector<int>> st;

  for (int i = 0; i < n; i++){
      for (int j = i + 1; j < n; j++){
      unordered_set<long long> temp;
          for (int k = j + 1; k < n; k++){
              long long sum=nums[i]+nums[j];
              sum+=nums[k];
              long long remain=target-sum;
              if(temp.find(remain)!=temp.end()){
                  vector<int> tempV={nums[i],nums[j],nums[k],(int)remain};
                  sort(tempV.begin(),tempV.end());
                  st.insert(tempV);
              }
              temp.insert(nums[k]);
          }
      }
  }
  vector<vector<int>> ans(st.begin(), st.end());
  return ans;
}

vector<vector<int>> fourSum(vector<int>& v, int target) { //O(n3)
    int n=v.size();
    sort(v.begin(),v.end());
    vector<vector<int>> ans;
    for(int i=0;i<n;i++){
        if(i!=0 && v[i]==v[i-1]) continue;
        for(int j=i+1;j<n;j++){
            if(j!=i+1 && v[j]==v[j-1]) continue;
            int k=j+1;
            int l=n-1;
            while(k<l){
                long long sum=v[i];
                sum+=v[j];
                sum+=v[k];
                sum+=v[l];
                if(sum==target){
                    ans.push_back({v[i],v[j],v[k],v[l]});
                    int ele1=v[k];
                    int ele2=v[l];
                    k++;
                    l--;
                    while(k<l && v[k]==ele1) k++;
                    while(k<l && v[l]==ele2) l--;
                }
                else if(sum<target) k++;
                else l--;
            }
        }
    }
    return ans;
}

int main(){
  vector<int> nums = {4, 3, 3, 4, 4, 2, 1, 2, 1, 1};
  int target = 9;
  vector<vector<int>> ans = fourSumBrut(nums, target);
  cout << "The quadruplets are: \n";
  for (auto it : ans){
    cout << "[";
    for (auto ele : it){
      cout << ele << " ";
    }
    cout << "] ";
  }
  cout << "\n";
  return 0;
}
