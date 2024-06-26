//Problem Link: https://www.geeksforgeeks.org/problems/postfix-to-prefix-conversion/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=postfix-to-prefix-conversion



#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    string postToPre(string str) {
        int n=str.size();
        stack<string> val;
        for(int i=0;i<n;i++){
            if(isdigit(str[i]) || isalpha(str[i])) {
                string temp="";
                char c=str[i];
                temp+=c;
                val.push(temp);
            }
            else{
                string s2=val.top();val.pop();
                string s1=val.top();val.pop();
                char c=str[i];
                val.push(c+s1+s2);
            }
        }
        return val.top();
    }
};

//{ Driver Code Starts.
int main() {
    int t = 1;
    cin >> t;
    while (t--) {
        string postfix;
        cin >> postfix;
        Solution obj;
        cout << obj.postToPre(postfix) << endl;
    }
    return 0;
}