// https://leetcode.com/problems/maximum-points-you-can-obtain-from-cards/description/


class Solution {
  public:
      int maxScore(vector<int>& cardPoints, int k) {
          int n = cardPoints.size();
          int sum=0;
          int ans=0;
          for(int i=0;i<k;i++) sum+=cardPoints[i];
          ans=sum;
          int i=k-1;
          int j=n-1;
          while(i>=0){
              sum-=cardPoints[i];
              sum+=cardPoints[j];
              ans=max(ans,sum);
              i--;
              j--;
          }
          return ans;
      }
  };
  