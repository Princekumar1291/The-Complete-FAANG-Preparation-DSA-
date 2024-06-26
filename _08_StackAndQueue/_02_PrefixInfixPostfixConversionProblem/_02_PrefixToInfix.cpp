//Problem Link: https://geeksforgeeks.org/problems/prefix-to-infix-conversion/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=prefix-to-infix-conversion



#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    string preToInfix(string s) {
        // Write your code here
        stack<string> val;
        int n=s.size();
        for(int i=n-1;i>=0;i--){
            if(isalpha(s[i]) || isdigit(s[i])){
                string temp="";
                char c=s[i];
                temp+=c;
                val.push(temp);
            }
            else{
                string s1=val.top();val.pop();
                string s2=val.top();val.pop();
                char c=s[i];
                val.push("("+s1+c+s2+")");
            }
        }
        return val.top();
    }
};


//{ Driver Code Starts.
int main() {
    int t = 1;
    cin >> t;

    // freopen ("output_gfg.txt", "w", stdout);

    while (t--) {
        // Input
        string prefix;
        cin >> prefix;

        Solution obj;
        cout << obj.preToInfix(prefix) << endl;

        // cout << "~\n";
    }
    // fclose(stdout);

    return 0;
}

// } Driver Code Ends