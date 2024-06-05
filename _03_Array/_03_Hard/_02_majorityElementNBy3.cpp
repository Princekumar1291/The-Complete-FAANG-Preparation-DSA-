#include<bits/stdc++.h>
using namespace std;

vector<int> majorityElement(vector<int>& v) {
  int n=v.size();   //O(n)
  unordered_map<int,int> mp;
  vector<int> ans;
  int t=n/3;
  for(int i=0;i<n;i++){
      mp[v[i]]++;
  }
  for(auto ele:mp){
      if(ele.second>t) ans.push_back(ele.first);
  }
  return ans;
}

vector<int> majorityElement2(vector<int>& v) {
  int n=v.size();   //O(n)
  unordered_map<int,int> mp;
  vector<int> ans;
  int t=n/3;
  for(int i=0;i<n;i++){
      mp[v[i]]++;
      if(mp[v[i]]==t+1) ans.push_back(v[i]);
  }
  return ans;
}

vector<int> majorityElementOpt(vector<int> v) { //O(n)
    int n=v.size();
    if(n==1) return v;
    vector<int > ans;
    int ele1=INT_MIN;
    int ele2=INT_MIN;
    int count1=0;
    int count2=0;
    for(int i=0;i<n;i++){
        if(count1==0 && v[i]!=ele2){
            count1++;
            ele1=v[i];
        }
        else if(count2==0 && v[i]!=ele1){
            count2++;
            ele2=v[i];
        }
        else if(v[i]==ele1) count1++;
        else if(v[i]==ele2) count2++;
        else {
            count1--;
            count2--;
        }
    }
    int c1=0;
    int c2=0;
    for(int i=0;i<n;i++){
        if(v[i]==ele1) c1++;
        if(v[i]==ele2) c2++;
    }
    if(c1>n/3) ans.push_back(ele1);
    if(c2>n/3) ans.push_back(ele2);
    sort(ans.begin(), ans.end());
    return ans;
}

int main() {
    vector<int> test1 = {3, 2, 3};
    vector<int> result1 = majorityElement(test1);
    cout << "Test Case 1: ";
    for (int num : result1) {
        cout << num << " ";
    }
    return 0;
}