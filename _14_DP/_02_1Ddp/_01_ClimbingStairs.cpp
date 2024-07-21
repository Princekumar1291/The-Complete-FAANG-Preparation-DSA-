// Try all possible way 
//  /      \
// count  best way then think about recursion


//Shortcut
// 1) try to represent the problem in terms of index
// 2) Do all possible stuff on that on that index according to the problem statement
// 3) sum of all stuff --> count all ways
//    min of all stuff --> find min







class Solution {
public:
    int climbStairs(int n) {
        if(n==0) return 1;
        else if(n==1) return 1;
        int left=climbStairs(n-1);
        int right=climbStairs(n-2);
        return left+right;
    }
};







class Solution {
public:
    int climbStairs(int n) {
        int dp[n+1];
        if(n==1) return 1;
        else if(n==2) return 2;
        dp[1]=1;
        dp[2]=2;
        for(int i=3;i<=n;i++){
            dp[i]=dp[i-1]+dp[i-2];
        }
        return dp[n];
    }
};