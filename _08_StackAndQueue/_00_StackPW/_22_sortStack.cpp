#include <iostream>
#include <stack>
using namespace std;

// Function to insert an element into a sorted stack
void insertEle(stack<int>& st,int ele){
  if(st.empty() || st.top()<=ele) {
    st.push(ele);
    return;
  }
  int topEle=st.top();st.pop();
  insertEle(st,ele);
  st.push(topEle);
}
void sortStack(stack<int>& st){
  if(st.size()==0) return ;
  int topEle=st.top();st.pop();
  sortStack(st);
  insertEle(st,topEle);
}

void printStack(stack<int> st) {
    while (!st.empty()) {
        cout << st.top() << " ";
        st.pop();
    }
    cout << endl;
}

int main() {
    stack<int> st;
    st.push(30);
    st.push(-5);
    st.push(18);
    st.push(14);
    st.push(-3);

    cout << "Original Stack: ";
    printStack(st);

    sortStack(st);

    cout << "Sorted Stack: ";
    printStack(st);

    return 0;
}
