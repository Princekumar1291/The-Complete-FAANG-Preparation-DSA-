// https://www.geeksforgeeks.org/problems/job-sequencing-problem-1587115620/1


class Solution {
  public:
    vector<int> JobSequencing(vector<int> &id, vector<int> &deadline,vector<int> &profit) {
        
      int n=deadline.size();
      int maxiDeadline=0;
      vector<pair<int,int>> arr;
      for(int i=0;i<n;i++) {
          arr.push_back({profit[i],deadline[i]});
          maxiDeadline=max(maxiDeadline,deadline[i]);
      }
      sort(arr.begin(), arr.end(),greater<pair<int,int>>());
      vector<int> dp(maxiDeadline+1,-1);
      
      int prof=0;
      int count=0;
      for(int i=0;i<n;i++){
          for(int j=arr[i].second;j>0;j--){
              if(dp[j]==-1) {
                  dp[j]=1;
                  count++;
                  prof+=arr[i].first;
                  break;
              }
          }
      }
      
      return {count, prof};
   }
};