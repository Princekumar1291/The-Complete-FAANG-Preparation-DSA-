//Problem Link: https://leetcode.com/problems/longest-consecutive-sequence/description/


class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size();
        if(n<=1) return n;
        sort(nums.begin(),nums.end());
        int ans=1;
        int ele=nums[0];
        int c=1;
        for(int i=1;i<n;i++){
            if(nums[i]==ele) continue;
            if(nums[i]==ele+1){
                c++;
                ele++;
                ans=max(ans,c);
            }
            else{
                ele=nums[i];
                c=1;
            }
        }
        return ans;
    }
};
