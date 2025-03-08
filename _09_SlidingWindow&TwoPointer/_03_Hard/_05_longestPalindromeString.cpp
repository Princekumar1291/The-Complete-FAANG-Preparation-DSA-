// https://leetcode.com/problems/longest-palindromic-substring/

class Solution {
  public:
      string longestPalindrome(string s) {          
          int n=s.size();
          string ans="";
  
          //for odd len
          for(int ax=0;ax<n;ax++){
              int radius=1;
              int len=1;
              while(ax-radius>=0 && ax+radius<n){
                  if(s[ax-radius]==s[ax+radius]){
                      radius++;
                      len+=2;
                  }
                  else break;
              }
              if(len>ans.size()){
                  int start=ax-len/2;
                  ans=s.substr(start,len);
              }
          }
  
          //for even length
  
          for(int ax=0;ax<n-1;ax++){
              int a=ax;
              int b=ax+1;
              int len=0;
              while(a>=0 && b<n){
                  if(s[a]==s[b]){
                      len+=2;
                      a--;b++;
                  }
                  else break;
              }
              if(len>ans.size()){
                  int start=ax-len/2+1;
                  ans=s.substr(start,len);
              }
          }
          return ans;
      }
  };