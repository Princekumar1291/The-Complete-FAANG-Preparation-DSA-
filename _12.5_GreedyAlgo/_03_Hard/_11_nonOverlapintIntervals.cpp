// https://leetcode.com/problems/non-overlapping-intervals/submissions/1551922229/


class Solution {
  public:
      int eraseOverlapIntervals(vector<vector<int>>& intervals) {
          sort(intervals.begin(),intervals.end(),[](const auto& a,const auto& b){
              return a[1]<b[1];
          });
          int last=INT_MIN,n=intervals.size(),ans=0;
          for(int i=0;i<n;i++){
              if(last<=intervals[i][0]){
                  last=intervals[i][1];
              }
              else{
                  ans++;
              }
          }
          return ans;
      }
  };