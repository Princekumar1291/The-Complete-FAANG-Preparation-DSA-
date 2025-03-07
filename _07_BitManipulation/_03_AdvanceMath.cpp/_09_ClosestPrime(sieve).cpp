// https://leetcode.com/problems/closest-prime-numbers-in-range/?envType=daily-question&envId=2025-03-07


class Solution {
  public:
      void sieveAlgo(vector<bool>& sieve, int right) {
          sieve[0] = sieve[1] = false; // 0 and 1 are not prime
          for (int i = 2; i * i <= right; i++) {
              if (sieve[i]) {
                  for (int j = i * i; j <= right; j += i) {
                      sieve[j] = false;
                  }
              }
          }
      }
  
      vector<int> closestPrimes(int left, int right) {
          vector<bool> sieve(right + 1, true);
          sieveAlgo(sieve, right);
  
          vector<int> ans;
  
          for (int i = left; i <= right; i++) {
              if (sieve[i]) ans.push_back(i);
          }
  
          int a = -1, b = -1, dif = INT_MAX;
          int t=ans.size()-1;
          for (int i = 0; i < t; i++) {
              if (ans[i + 1] - ans[i] < dif) {
                  a = ans[i];
                  b = ans[i + 1];
                  dif = ans[i + 1] - ans[i];
              }
          }
  
          return {a, b};
      }
  };
  