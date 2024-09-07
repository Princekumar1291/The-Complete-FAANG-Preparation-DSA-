#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> merge(vector<vector<int>>& intervals) {
  int n=intervals.size();   //O(n2)
  sort(intervals.begin(),intervals.end());
  vector<vector<int>> ans;
  for(int i=0;i<n;i++){
      int f=intervals[i][0];
      int s=intervals[i][1];
      if(i!=0 && ans.back()[1]>=intervals[i][0]) continue;
      for(int j=i+1;j<n;j++){
          if(intervals[j][0]<=s){
              if(intervals[j][1]>=s) s=intervals[j][1];
          }
          else break;
      }
      ans.push_back({f,s});
  }
  return ans;
}

vector<vector<int>> merge(vector<vector<int>>& intervals) {
  int n=intervals.size();
  sort(intervals.begin(),intervals.end());
  vector<vector<int>> ans;
  ans.push_back(intervals[0]);
  for(int i=1;i<n;i++){
    if(ans.back()[1]>=intervals[i][0]){
      if(ans.back()[1]<=intervals[i][1]) ans.back()[1]=intervals[i][1];
    }
    else ans.push_back(intervals[i]);
  }
  return ans;
}

int main(){
  vector<vector<int>> v={{1, 3}, {2, 6}, {8, 10}, {12, 18}};
  mergeIntervalOpt(v);
  for(auto ele:v){
    for(auto e:ele) cout<<e<<" ";
    cout<<endl;
  }
  return 0;
}