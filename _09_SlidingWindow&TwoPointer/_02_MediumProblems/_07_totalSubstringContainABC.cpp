// https://leetcode.com/problems/number-of-substrings-containing-all-three-characters/



class Solution {     //n2
  public:
      int numberOfSubstrings(string s) {
          int n=s.size();
          int ans=0;
          for(int i=0;i<n;i++){
              vector<int> freq(3,0);
              for(int j=i;j<n;j++){
                  freq[s[j]-'a']=1;
                  if(freq[0]==1 && freq[1]==1 && freq[2]==1) ans++;
              }
          }
          return ans;
      }
  };




class Solution {
  public:
      int numberOfSubstrings(string s) {
          int n=s.size();
          int ans=0;
          int i=0;
          vector<int> freq(3,-1);
          while(i<n){
              freq[s[i]-'a']=i;
              if(freq[0]!=-1 && freq[1]!=-1 && freq[2]!=-1){
                  ans=ans+(1+min({freq[0],freq[1],freq[2]}));
              }
              i++;
          }
          return ans;
      }
  };