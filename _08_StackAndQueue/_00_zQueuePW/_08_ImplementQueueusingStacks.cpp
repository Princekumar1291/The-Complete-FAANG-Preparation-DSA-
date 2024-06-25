// Problem Link: https://leetcode.com/problems/implement-queue-using-stacks/description/

#include<bits/stdc++.h>
using namespace std;

class MyQueue {
public:
    stack<int> st1;
    stack<int> st2;
    MyQueue() {
        // stack<int> st1;
        // stack<int> st2;
    }
    
    void push(int x) {
        st1.push(x);
    }
    
    int pop() {
        while(st1.size()!=0){
            st2.push(st1.top());
            st1.pop();
        }
        int ans=st2.top();
        st2.pop();
        while(st2.size()!=0){
            st1.push(st2.top());
            st2.pop();
        }
        return ans;
    }
    
    int peek() {
        while(st1.size()!=0){
            st2.push(st1.top());
            st1.pop();
        }
        int ans=st2.top();
        while(st2.size()!=0){
            st1.push(st2.top());
            st2.pop();
        }
        return ans;
    }
    
    bool empty() {
        return !st1.size();
    }
};


int main(){
  
  return 0;
}