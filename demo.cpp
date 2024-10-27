//Problem Link: https://leetcode.com/problems/kth-largest-element-in-an-array/submissions/1434771479/


#include<bits/stdc++.h>
using namespace std;
int main(){
  vector<int> v={10,20,-4,6,18,24,105,118};
  int n=v.size();
  int k=8;
  priority_queue<int> pq;
  for(int i=0;i<n;i++){
    pq.push(v[i]);
    if(pq.size()>k) pq.pop();
  }
  cout<<pq.top()<<endl;
  return 0;
}

// time--> O(nlog(k))
// space--> O(k)