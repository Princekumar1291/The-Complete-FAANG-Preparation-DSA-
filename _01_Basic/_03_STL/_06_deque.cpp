#include<bits/stdc++.h>
using namespace std;
int main(){
    deque <int> dq;
    dq.push_back(10);
    dq.push_back(20);
    dq.push_back(30);
    dq.push_front(40);
    dq.push_front(50);
    dq.push_front(60);
    for(auto ele:dq) cout<<ele<<" ";cout<<endl;
    dq.pop_back();
    dq.pop_front();
    cout<<dq.back()<<endl;
    cout<<dq.front()<<endl;
    return 0;
}