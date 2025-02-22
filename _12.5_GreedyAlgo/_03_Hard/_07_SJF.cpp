// https://www.geeksforgeeks.org/problems/shortest-job-first/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=shortest-job-first



class Solution {
  public:
    long long solve(vector<int>& bt) {
        int n=bt.size();
        sort(bt.begin(),bt.end());
        long long ans=0;
        int time=0;
        for(int i=0;i<n;i++){
            ans+=time;
            time+=bt[i];
        }
        return ans/n;
    }
};