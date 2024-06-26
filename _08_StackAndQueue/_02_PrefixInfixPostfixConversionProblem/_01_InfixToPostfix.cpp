//Problem Link: https://www.geeksforgeeks.org/problems/infix-to-postfix-1587115620/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=infix-to-postfix




#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    bool isAlpha(char ch){
        if((ch>='A' && ch<='Z') || (ch>='a' && ch<='z') ) return true;
        return false;
    } 
    int helper(char ch){
        if(ch=='+' || ch=='-') return 1;
        else if(ch=='*' || ch=='/') return 2;
        else if(ch=='^') return 3;
        return 0;
    }
    string infixToPostfix(string s) {
        stack<string> val;
        stack<char> op;
        int n=s.size();
        for(int i=0;i<n;i++){
            if(isAlpha(s[i]) || isdigit(s[i])){
                string temp="";
                char ch=s[i];
                temp+=ch;
                val.push(temp);
            }
            else{
                if(op.empty()) op.push(s[i]);
                else if(s[i]=='('){
                    op.push(s[i]);
                }
                else if(s[i]==')'){
                    while(op.top()!='('){
                        string s2=val.top();
                        val.pop();
                        string s1=val.top();
                        val.pop();
                        char c=op.top();
                        op.pop();
                        val.push(s1+s2+c);
                    }
                    op.pop();
                }
                else if(op.top()=='(') op.push(s[i]);
                else if(helper(s[i])>helper(op.top())){
                    op.push(s[i]);
                }
                else{
                    while(!op.empty() && helper(s[i])<=helper(op.top())){
                        string s2=val.top();
                        val.pop();
                        string s1=val.top();
                        val.pop();
                        char c=op.top();
                        op.pop();
                        val.push(s1+s2+c);
                    }
                    op.push(s[i]);
                }
            }
        }
        while(!op.empty()){
            string s2=val.top();
            val.pop();
            string s1=val.top();
            val.pop();
            char c=op.top();
            op.pop();
            val.push(s1+s2+c);
        }
        return val.top();
    }
};


//{ Driver Code Starts.
// Driver program to test above functions
int main() {
    int t;
    cin >> t;
    cin.ignore(INT_MAX, '\n');
    while (t--) {
        string exp;
        cin >> exp;
        Solution ob;
        cout << ob.infixToPostfix(exp) << endl;
    }
    return 0;
}

// } Driver Code Ends