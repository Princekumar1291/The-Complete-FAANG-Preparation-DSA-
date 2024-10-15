// Problem Link: https://www.geeksforgeeks.org/problems/stock-span-problem-1587115621/1

#include<bits/stdc++.h>
using namespace std;

vector <int> calculateSpan(int price[], int n){
    // previous greater element
    stack<int> st;
    vector<int> ans(n);
    for(int i=0;i<n;i++){
        while(!st.empty() && price[st.top()]<=price[i]){
            st.pop();
        }
        if(st.empty()) ans[i]=i+1;
        else ans[i]=i-st.top();
        st.push(i);
    }
    return ans;
}

int main(){
  
  return 0;
}