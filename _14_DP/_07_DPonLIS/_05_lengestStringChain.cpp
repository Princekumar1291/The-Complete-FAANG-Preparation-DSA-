//Probem Link: https://leetcode.com/problems/longest-string-chain/description/


class Solution {
  public:
      bool isValid(string& s1,string& s2){
          int n=s1.size();
          int m=s2.size();
          if(n-m!=1) return false;
          int i=0;
          int j=0;
          while(i<n){
              if(s1[i]==s2[j]) {
                  i++;j++;
              }
              else i++;
          }
          if(i==n && j==m) return true;
          return false;
      }
      int longestStrChain(vector<string>& words) {
          int n=words.size();
          sort(words.begin(),words.end(),[](const string& s1,const string& s2){
              if(s1.size()<s2.size()) return true;
              else return false;
          });
          vector<int> dp(n,1);
          for(int i=0;i<n;i++){
              for(int pi=0;pi<i;pi++){
                  if(isValid(words[i],words[pi]) && dp[pi]+1>dp[i]){
                      dp[i]=dp[pi]+1;
                  }
              }
          }
          return *max_element(dp.begin(),dp.end());
      }
  };
