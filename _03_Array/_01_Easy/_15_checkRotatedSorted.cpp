//Problem Link: https://leetcode.com/problems/check-if-array-is-sorted-and-rotated/description/


class Solution {
public:
    bool check(vector<int>& nums) {
        int c=0;
        int n=nums.size();
        for(int i=0;i<n-1;i++){
            if(nums[i]>nums[i+1]) c++;
        }
        if(n>1 && nums[n-1]>nums[0]) c++;
        if(c<=1) return true;
        return false;
    }
};