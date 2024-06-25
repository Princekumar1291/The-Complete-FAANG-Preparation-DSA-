// Problem Link: https://leetcode.com/problems/min-stack/description/

#include<bits/stdc++.h>
using namespace std;

class MinStack {
public:
    stack<pair<int,int>> st;
    MinStack() {
        
    }
    
    void push(int val) {
        if(st.size()==0) st.push({val,val});
        else{
            st.push({val,min(val,st.top().second)});
        }
    }
    
    void pop() {
        if(st.size()>0) st.pop();
    }
    
    int top() {
        if(st.size()>0) return st.top().first;
        return -1;
    }
    
    int getMin() {
        if(st.size()>0) return st.top().second;
        return -1;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */


int main(){
  
  return 0;
}