//Problem Link: https://leetcode.com/problems/sort-array-by-increasing-frequency/description/




#include<bits/stdc++.h>
using namespace std;
vector<int> frequencySort(vector<int>& nums) {
    unordered_map<int,int> mp;
    for(int ele:nums) mp[ele]++;
    vector<int> ans;
    vector<pair<int,int>> temp;
    for(auto p:mp) temp.push_back({p.second,p.first});
    sort(temp.begin(),temp.end(),[](const pair<int, int>& a, const pair<int, int>& b) {
        if (a.first == b.first) {
            return a.second > b.second; // For same frequency, sort by value descending
        }
        return a.first < b.first; // Otherwise, sort by frequency ascending);
    });
    for(int i=0;i<temp.size();i++){
        while(temp[i].first>0) {
            ans.push_back(temp[i].second);
            temp[i].first--;
        }
    }
    return ans;
}
int main(){
  vector<int> v={1,1,2,2,3};
  vector<int> ans=frequencySort(v);
  for(int ele:ans) cout<<ele<<" ";
  return 0;
}