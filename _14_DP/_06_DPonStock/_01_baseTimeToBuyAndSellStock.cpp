//Problem Link: https://leetcode.com/problems/best-time-to-buy-and-sell-stock/submissions/1337248847/





class Solution {
public:

    int maxProfit(vector<int>& prices) {
        int ans=0;
        int mini=prices[0];
        int n=prices.size();
        for(int i=1;i<n;i++){
            int prof=prices[i]-mini;
            ans=max(ans,prof);
            mini=min(mini,prices[i]);
        }
        return ans;
    }
};