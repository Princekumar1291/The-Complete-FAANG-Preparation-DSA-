// https://leetcode.com/problems/longest-repeating-character-replacement/





class Solution {
public:
    int characterReplacement(string s, int k) {
        int n=s.size();
        vector<int> freq(26,0);
        int ans=0;
        int i=0,j=0;
        while(j<n){
            freq[s[j]-'A']++;
            int maxFreq=0;
            for(int t=0;t<26;t++) maxFreq=max(maxFreq,freq[t]);
            int rem=(j-i+1)-maxFreq;
            if(rem<=k){
                ans=max(ans,j-i+1);
                j++;
            }
            else{
                freq[s[i]-'A']--;
                i++;
                j++;
            }
        }
        return ans;
    }
};




class Solution {   //n2
  public:
      int characterReplacement(string s, int k) {
          int n=s.size();
          int maxFreq=0;
          int ans=0;
          for(int i=0;i<n;i++){
              vector<int> freq(26,0);
              for(int j=i;j<n;j++){
                  freq[s[j]-'A']++;
                  maxFreq=max(maxFreq,freq[s[j]-'A']);
                  int rem=(j-i+1)-maxFreq;
                  if(rem<=k) ans=max(ans,j-i+1);
                  else break;
              }
          }
          return ans;
      }
  };