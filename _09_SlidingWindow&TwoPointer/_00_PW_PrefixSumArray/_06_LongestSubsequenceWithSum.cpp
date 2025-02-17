// https://leetcode.com/problems/longest-subsequence-with-limited-sum/description/



class Solution {
public:
    vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
        int n=nums.size();
        int m=queries.size();
        sort(nums.begin(),nums.end());
        vector<int> prefSum(n,0);
        prefSum[0]=nums[0];
        for(int i=1;i<n;i++) prefSum[i]=prefSum[i-1]+nums[i];
        vector<int> ans(m,0);
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(prefSum[j]<=queries[i]){
                    ans[i]++;
                }
                else break;
            }
        }
        return ans;
    }
};