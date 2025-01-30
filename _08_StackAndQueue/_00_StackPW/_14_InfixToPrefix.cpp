// Prefix expression (2+6*4/8-3) it is all about operator
//In -->v1 op v2
//Pre -->op v1 v2
//Post -->v1 v2 op


// #include<bits/stdc++.h>
// using namespace std;
// int opWeight(char ch){
//   if(ch=='+' || ch=='-') return 1;
//   return 2;
// }
// int main(){
//   string s="2+6*4/8-3";
//   int n=s.size();
//   stack<string> val;
//   stack<char> op;
//   for(int i=0;i<n;i++){
//     if(isdigit(s[i])){
//       string temp="";
//       temp+=s[i];
//       val.push(temp);
//     }
//     else{
//       if(op.empty()){
//         op.push(s[i]);
//       }
//       else if(opWeight(s[i])>opWeight(op.top())){
//         op.push(s[i]);
//       }
//       else{
//         while(!op.empty() && opWeight(s[i])<=opWeight(op.top())){
//           string s2=val.top();val.pop();
//           string s1=val.top();val.pop();
//           char c=op.top();op.pop();
//           string ans=c+s1+s2;
//           val.push(ans);
//         }
//         op.push(s[i]);
//       }
//     }
//   }
//   while(!op.empty()){
//     string s2=val.top();val.pop();
//     string s1=val.top();val.pop();
//     char c=op.top();op.pop();
//     string ans=c+s1+s2;
//     val.push(ans);
//   }
//   cout<<val.top();
//   return 0;
// }






#include<bits/stdc++.h>
using namespace std;
int opWeight(char ch){
  if(ch=='+' || ch=='-') return 1;
  return 2;
}
int main(){
  string s="2+(6*4)/(8-3)";
  int n=s.size();
  stack<string> val;
  stack<char> op;
  for(int i=0;i<n;i++){
    if(isdigit(s[i])){
      // string temp="";
      // temp+=s[i];
      string temp(1,s[i]);
      val.push(temp);
    }
    else{
      if(op.empty()){
        op.push(s[i]);
      }
      else if(s[i]=='(') op.push(s[i]);
      else if(s[i]==')'){
        while(op.top()!='('){
          string s2=val.top();val.pop();
          string s1=val.top();val.pop();
          char c=op.top();op.pop();
          string ans=c+s1+s2;
          val.push(ans);
        }
        op.pop();
      }
      else if(op.top()=='(') op.push(s[i]);
      else if(opWeight(s[i])>opWeight(op.top())){
        op.push(s[i]);
      }
      else{
        while(!op.empty() && opWeight(s[i])<=opWeight(op.top())){
          string s2=val.top();val.pop();
          string s1=val.top();val.pop();
          char c=op.top();op.pop();
          string ans=c+s1+s2;
          val.push(ans);
        }
        op.push(s[i]);
      }
    }
  }
  while(!op.empty()){
    string s2=val.top();val.pop();
    string s1=val.top();val.pop();
    char c=op.top();op.pop();
    string ans=c+s1+s2;
    val.push(ans);
  }
  cout<<val.top();
  return 0;
}








// #include<bits/stdc++.h>
// using namespace std;
// int value(char ch){
//     if(ch=='+') return 1;
//     else if(ch=='-') return 1;
//     else if(ch=='*') return 2;
//     else if(ch=='/') return 2;
//     else if(ch=='^') return 3;
//     return 0;
// }
// string infixToPostfix(string s) {
//     int n=s.size();
//     string ans;
//     stack<char> st;
//     for(int i=0;i<n;i++){
//         if(isalnum(s[i])){
//             ans+=s[i];
//         }
//         else if(s[i]==')'){
//             while(st.top()!='('){
//                 ans+=st.top();
//                 st.pop();
//             }
//             st.pop();
//         }
//         else if(st.empty() || s[i]=='(' || st.top()=='(') st.push(s[i]);
//         else{
//             while(!st.empty() && value(s[i])<value(st.top())){
//                 ans+=st.top();
//                 st.pop();
//             }
//             st.push(s[i]);
//         }
//     }
//     while(!st.empty()){
//         ans+=st.top();
//         st.pop();
//     }
//     return ans;
// }
// void revHelper(string& s){
//   reverse(s.begin(),s.end());
//   for(int i=0;i<s.size();i++){
//     if(s[i]=='(') s[i]=')';
//     else if(s[i]==')') s[i]='(';
//   }
// }
// string infixToPrefix(string s) {
//     revHelper(s);
//     string ans=infixToPostfix(s);
//     revHelper(ans);
//     return ans;
// }


// int main(){
//     string s="a+b*(c^d-e)^(f+g*h)-i";
//     cout<<infixToPrefix(s)<<endl;
//   return 0;
// }