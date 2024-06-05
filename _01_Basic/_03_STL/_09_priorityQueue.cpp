#include<bits/stdc++.h>
using namespace std;
int main(){
    priority_queue<int> pq;   //max heap pq
    pq.push(20);   //lon(n)
    pq.push(52);
    pq.push(86);
    pq.push(52);
    pq.push(96);
    cout<<pq.top()<<endl;   //O(1)
    pq.pop();   //log(n)
    pq.size();   //O(1)
    pq.empty();   //O(1)

    
    priority_queue<int,vector<int>,greater<int>> pq1;  ////min heap pq
    pq1.push(10);
    pq1.push(52);
    pq1.push(85);
    pq1.push(63);
    pq1.push(2);
    cout<<pq.top()<<endl;
    pq.pop();
    
    return 0;
}