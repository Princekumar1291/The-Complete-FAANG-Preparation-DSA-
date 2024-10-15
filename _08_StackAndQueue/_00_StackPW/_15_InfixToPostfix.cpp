// Prefix expression (2+6*4/8-3) it is all about operator
//In -->v1 op v2
//Pre -->op v1 v2
//Post -->v1 v2 op



//Problem link: https://www.geeksforgeeks.org/problems/infix-to-postfix-1587115620/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=infix-to-postfix
#include<bits/stdc++.h>
using namespace std;
int value(char ch){
    if(ch=='+') return 1;
    else if(ch=='-') return 1;
    else if(ch=='*') return 2;
    else if(ch=='/') return 2;
    else if(ch=='^') return 3;
    return 0;
}
string infixToPostfix(string s) {
    int n=s.size();
    string ans;
    stack<char> st;
    for(int i=0;i<n;i++){
        if(isalnum(s[i])){
            ans+=s[i];
        }
        else if(s[i]==')'){
            while(st.top()!='('){
                ans+=st.top();
                st.pop();
            }
            st.pop();
        }
        else if(st.empty() || s[i]=='(' || st.top()=='(') st.push(s[i]);
        else{
            while(!st.empty() && value(s[i])<=value(st.top())){
                ans+=st.top();
                st.pop();
            }
            st.push(s[i]);
        }
    }
    while(!st.empty()){
        ans+=st.top();
        st.pop();
    }
    return ans;
}


int main(){
    string s;
    cin>>s;
    cout<<infixToPostfix(s);
  return 0;
}