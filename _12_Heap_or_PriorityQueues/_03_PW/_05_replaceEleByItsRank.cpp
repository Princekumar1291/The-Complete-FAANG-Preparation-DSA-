// https://www.geeksforgeeks.org/problems/replace-elements-by-its-rank-in-the-array/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=replace-elements-by-its-rank-in-the-array

class Solution {
  public:
      vector<int> replaceWithRank(vector<int> &arr, int n) {
          vector<pair<int, int>> v;
          for (int i = 0; i < n; i++) v.push_back({arr[i], i});
          sort(v.begin(), v.end());
          vector<int> ans(n, 0);
          int rank = 1;
  
          ans[v[0].second] = rank;
          for (int i = 1; i < n; i++) {
              if (v[i].first != v[i - 1].first) rank++;
              ans[v[i].second] = rank;
          }
          
          return ans;
      }
  };