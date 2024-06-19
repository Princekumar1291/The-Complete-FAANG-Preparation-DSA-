#include<bits/stdc++.h>
using namespace std;

int opWeight(char ch) {
    if (ch == '+' || ch == '-') return 1;
    else if (ch == '*' || ch == '/') return 2;
    else return 0;
}


int calculateArith(int a, int b, char op) {
    if (op == '+') return a + b;
    else if (op == '-') return a - b;
    else if (op == '*') return a * b;
    else return a / b;  // assuming no division by zero
}

int main() {
    string st = "20/20*60*40/8-30";  // infix expression
    int n = st.size();
    stack<int> val;
    stack<char> op;

    for (int i = 0; i < n; i++) {
        if (isdigit(st[i])) {  // handle multi-digit numbers
            int num = 0;
            while (i < n && isdigit(st[i])) {
                num = num * 10 + (st[i] - '0');
                i++;
            }
            val.push(num);
            i--;  // to offset the increment in for loop
        }
        else{
            if(op.empty() || opWeight(op.top()) < opWeight(st[i])){
              op.push(st[i]);
            }
            else{
              while (!op.empty() && opWeight(op.top()) >= opWeight(st[i])) {
                int b = val.top(); val.pop();
                int a = val.top(); val.pop();
                char ch = op.top(); op.pop();
                int cal = calculateArith(a, b, ch);
                val.push(cal);
              }
              op.push(st[i]);
            }
        }
    }

    // remaining operations in the stack
    while (!op.empty()) {
        int b = val.top(); val.pop();
        int a = val.top(); val.pop();
        char ch = op.top(); op.pop();
        int cal = calculateArith(a, b, ch);
        val.push(cal);
    }

    cout << val.top() << endl;
    cout << 20/20*60*40/8-30 << endl;
    return 0;
}
