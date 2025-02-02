//Problem Link: https://www.geeksforgeeks.org/problems/minimum-sum-partition3317/1?itm_source=geeksforgeeks&itm_medium=article&itm_campaign=practice_card




bool targetSum(vector<int>& nums,int target,int i,vector<vector<int>>& dp){
	if(target==0) return true;
	if(i==0) return nums[i]==target;
	if(dp[i][target]!=-1) return dp[i][target];
	bool notTake=targetSum(nums,target,i-1,dp);
	bool take=false;
	if(target>=nums[i]) take=targetSum(nums,target-nums[i],i-1,dp);
	return dp[i][target]=take||notTake;
}
int minSubsetSumDifference(vector<int>& nums, int n){
	int totSum=0;
	for(int ele:nums) totSum+=ele;

	int ans=INT_MAX;
	vector<vector<int>> dp(n,vector<int>(totSum+1,-1));
	for(int i=0;i<=totSum;i++){
		bool temp=targetSum(nums,i,n-1,dp);
		if(temp) ans=min(ans,abs(i-(totSum-i)));
	} 
	return ans;
}
