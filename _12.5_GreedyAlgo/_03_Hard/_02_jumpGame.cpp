// https://leetcode.com/problems/jump-game/description/

class Solution {
  public:
      bool canJump(vector<int>& nums) {
          int maxInd=0;
          int n=nums.size();
          for(int i=0;i<n;i++){
              if(i>maxInd) return false;
              maxInd=max(maxInd,i+nums[i]);
          }
          return true;
      }
  };