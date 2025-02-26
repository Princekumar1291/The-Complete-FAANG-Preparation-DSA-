// https://leetcode.com/problems/number-of-sub-arrays-with-odd-sum/description/?envType=daily-question&envId=2025-02-25



class Solution {
  public:
      int numOfSubarrays(vector<int>& arr) {
          int sum=0;
          int odd=0;
          int even=1;
          int ans=0;
          for(int i=0;i<arr.size();i++){
              sum+=arr[i];
              if(sum%2==0){
                  ans+=odd;
                  even++;
              }
              else{
                  ans+=even;
                  odd++;
              }
              ans%=(int)1e9+7;
          }
          return ans;
      }
  };