// https://leetcode.com/problems/number-of-substrings-containing-all-three-characters/description/?envType=daily-question&envId=2025-03-11


class Solution {
  public:
      int numberOfSubstrings(string s) {
          vector<int> freq(3,0);
          int n=s.size();
          int i=0;
          int j=0;
          int ans=0;
          while(j<n){
              freq[s[j]-'a']++;
              while(freq[0]>=1 && freq[1]>=1 && freq[2]>=1){
                  ans+=n-j;
                  freq[s[i]-'a']--;
                  i++;
              }
              j++;
          }
          return ans;
      }
  };