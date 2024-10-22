//Problem Link: https://leetcode.com/problems/maximum-sum-of-distinct-subarrays-with-length-k/description/


class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        int n=nums.size();
        if(k>n) return 0;

        long long sum=0;
        long long ans=0;
        unordered_map<int,int> mp;

        for(int i=0;i<k;i++) {
            sum+=nums[i];
            mp[nums[i]]++;
        }
        if(mp.size()==k) ans=sum;

        for(int i=k;i<n;i++){
            sum=sum+nums[i]-nums[i-k];
            mp[nums[i]]++;
            mp[nums[i-k]]--;
            if(mp[nums[i-k]]==0) mp.erase(nums[i-k]);
            if(mp.size()==k) ans=max(ans,sum);
        }
        return ans;
    }
};