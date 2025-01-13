//q.push(10);
//q.back();
//q.front();
//q.pop();
//q.empty();


#include<bits/stdc++.h>
using namespace std;
int main(){
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.pop();

    q.empty();

    q.back()+=5;
    cout<<q.front()<<endl;
    cout<<q.back()<<endl;
    return 0;
}