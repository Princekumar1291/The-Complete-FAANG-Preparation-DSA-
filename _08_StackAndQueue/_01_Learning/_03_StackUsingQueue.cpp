// Problem Link: https://leetcode.com/problems/implement-stack-using-queues/description/


#include<bits/stdc++.h>
using namespace std;

class MyStack {
public:
    queue<int> q1;
    queue<int> q2;
    MyStack() {
        
    }
    
    void push(int x) {
        q1.push(x);
    }
    
    int pop() {
        while(!q1.empty()){
            int temp=q1.front();
            q1.pop();
            q2.push(temp);
        }
        while(q2.size()>1){
            int temp=q2.front();
            q2.pop();
            q1.push(temp);
        }
        int ans=q2.front();
        q2.pop();
        return ans;
    }
    
    int top() {
        return q1.back();
    }
    
    bool empty() {
        return q1.empty();
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */


int main(){
  
  return 0;
}