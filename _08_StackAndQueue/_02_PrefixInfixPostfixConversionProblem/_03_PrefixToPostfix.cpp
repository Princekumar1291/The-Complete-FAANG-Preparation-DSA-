//Problem Link: https://www.geeksforgeeks.org/problems/prefix-to-postfix-conversion/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=prefix-to-postfix-conversion


#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    string preToPost(string str) {
        int n=str.size();
        stack<string> val;
        for(int i=n-1;i>=0;i--){
            if(isdigit(str[i]) || isalpha(str[i])){
                string temp="";
                char ch=str[i];
                temp+=ch;
                val.push(temp);
            }
            else{
                string s1=val.top();val.pop();
                string s2=val.top();val.pop();
                char c=str[i];
                val.push(s1+s2+c);
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
        string prefix;
        cin >> prefix;
        Solution obj;
        cout << obj.preToPost(prefix) << endl;
    }
    return 0;
}
