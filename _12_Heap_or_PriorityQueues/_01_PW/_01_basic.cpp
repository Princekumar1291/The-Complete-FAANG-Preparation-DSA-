#include<bits/stdc++.h>
using namespace std;
int main(){
  priority_queue<int> pq; //max heap
  pq.push(10);
  pq.push(2);
  pq.push(-6);
  pq.push(8);


  
  priority_queue<int,vector<int>,greater<int>> pq1; //min heap


  return 0;
}


//If we want a DS in which we can always git the max or min element at any pt. of time then we use priority_queue(Heap).
// time--> 
// 01)top--> O(1)
// 02)push--> O(log(n))
// 03)pop--> O(log(n))


// 2 types of Heap default(max heap)
// 01)Max Heap--> max ele is on the top
// 02)Min Heap--> Min ele is on the top



// Problem Identification 
// 01) kth smallest,largest,top k frequent elements,closest kill_dependency
// 02) At any point of time,minimum/max elements are required 
// 03) Sorting(some time)