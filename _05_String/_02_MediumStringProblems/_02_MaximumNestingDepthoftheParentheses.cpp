//Problem Link: https://leetcode.com/problems/maximum-nesting-depth-of-the-parentheses/description/


#include<bits/stdc++.h>
using namespace std;

int maxDepth(string s) {
    int ans=0;
    int temp=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='('){
            temp++;
            ans=max(ans,temp);
        }
        else if(s[i]==')') temp--;
    }
    return ans;
}

int main(){
  
  return 0;
}