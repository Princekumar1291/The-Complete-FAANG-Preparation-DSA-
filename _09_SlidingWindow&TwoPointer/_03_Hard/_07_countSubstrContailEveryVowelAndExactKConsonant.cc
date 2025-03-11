// https://leetcode.com/problems/count-of-substrings-containing-every-vowel-and-k-consonants-ii/description/?envType=daily-question&envId=2025-03-10

class Solution {
  public:
      bool isVowel(char ch){
          return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
      }
      
      long long helper(string s, int k){
          unordered_map<int, int> mp;
          int cons = 0;
          long long ans = 0;
          int n = s.size();
          int i = 0, j = 0;
          
          while(j < n){
              if(isVowel(s[j])) mp[s[j]]++;
              else cons++;
              
              while(cons >= k && mp.size() == 5){
                  ans += (n - j);
                  if(isVowel(s[i])){
                      mp[s[i]]--;
                      if(mp[s[i]] == 0) mp.erase(s[i]);
                  }
                  else cons--; // Move this line outside the vowel check
                  i++;
              }
              j++;
          }
          return ans;
      }
      
      long long countOfSubstrings(string word, int k) {
          long long a = helper(word, k);      // At least k consonants
          long long b = helper(word, k + 1);  // At least k + 1 consonants
          return a - b;                       // Exactly k consonants
      }
  };
  