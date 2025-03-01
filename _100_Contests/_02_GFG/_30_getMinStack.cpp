// https://www.geeksforgeeks.org/problems/get-minimum-element-from-stack/1


class Solution {
  public:
    stack<pair<int,int>> st;
    Solution() {
        st=stack<pair<int,int>>();
    }

    // Add an element to the top of Stack
    void push(int x) {
        if(st.size()==0) st.push({x,x});
        else st.push({x,min(x,st.top().second)});
    }

    // Remove the top element from the Stack
    void pop() {
        if(st.size()!=0) st.pop();
    }

    // Returns top element of the Stack
    int peek() {
        if(st.size()==0) return -1;
        else return st.top().first;
    }

    // Finds minimum element of Stack
    int getMin() {
        if(st.size()==0) return -1;
        return st.top().second;
    }
    
};