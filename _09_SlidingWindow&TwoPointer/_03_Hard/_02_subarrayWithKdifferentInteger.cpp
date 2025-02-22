// https://leetcode.com/problems/subarrays-with-k-different-integers/description/



class Solution {
  public:
  
      int helper(vector<int> &nums , int k){
          int l = 0 , r = 0;
          int count = 0 , n = nums.size();
          unordered_map<int , int > mp;
  
          while(r < n){
              mp[nums[r]]++;
              while(mp.size() > k){
                  mp[nums[l]]--;
                  if(mp[nums[l]] == 0) mp.erase(nums[l]);
                  l++;
              }
              count += r - l + 1; 
              r++;
          }
          return count;
      }
      int subarraysWithKDistinct(vector<int>& nums, int k) {
          return helper(nums , k) - helper(nums , k - 1);
      }
  };