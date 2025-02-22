// https://leetcode.com/problems/merge-intervals/


class Solution {
  public:
      vector<vector<int>> merge(vector<vector<int>>& v) {
          sort(v.begin(),v.end());
          vector<vector<int>> ans;
          ans.push_back(v[0]);
          for(int i=1;i<v.size();i++){
              int n=ans.size();
              if(v[i][0]<=ans[n-1][1]){
                  ans[n-1][1]=max(ans[n-1][1],v[i][1]);
              }
              else{
                  ans.push_back(v[i]);
              }
          }
          return ans;
      }
  };