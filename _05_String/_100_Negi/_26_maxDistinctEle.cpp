//Problem Link: https://www.geeksforgeeks.org/problems/length-of-the-longest-substring3036/1?page=1&difficulty%255B%255D=1&category%255B%255D=Strings&sortBy=submissions



#include<bits/stdc++.h>
using namespace std;
int longestUniqueSubsttr(string s){
    //code
    int n=s.size();
    int ans=0;
    unordered_map<char,int>mp;
    int low=0;
    for(int i=0;i<n;i++){
        if(mp.find(s[i])!=mp.end() && mp[s[i]]>=low){
            low=mp[s[i]]+1;
        }
        mp[s[i]]=i;
        ans=max(ans,i-low+1);
    }
    return ans;
}

int longestUniqueSubsttr(string s) {
    int n = s.size();
    int ans = 0;
    vector<int> v(128, -1); 
    int low = 0;

    for (int i = 0; i < n; i++) {
        if (v[s[i]] >= low) {  
            low = v[s[i]] + 1;
        }
        ans = max(ans, i - low + 1); 
        v[s[i]] = i; 
    }

    return ans;
}

int main(){
  
  return 0;
}