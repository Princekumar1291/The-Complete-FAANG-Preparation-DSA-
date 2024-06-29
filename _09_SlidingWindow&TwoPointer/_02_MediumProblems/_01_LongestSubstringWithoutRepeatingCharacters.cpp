// Problem Link: https://leetcode.com/problems/longest-substring-without-repeating-characters/description/

#include<bits/stdc++.h>
using namespace std;

int lengthOfLongestSubstring(string s) {
    int n=s.size();
    int i=0,j=0,ans=0;
    unordered_map<char,int> mp;
    while(j<n){
        if(mp.find(s[j])!=mp.end()){
            if(mp[s[j]]>=i){
                ans=max(ans,j-i);
                i=mp[s[j]]+1;
                mp[s[j]]=j;
            }
        }
        mp[s[j]]=j;
        j++;
    }
    ans=max(ans,j-i);
    return ans;
}


int main(){
  
  return 0;
}