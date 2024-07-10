#include<bits/stdc++.h>
using namespace std;
int main(){
  vector<int> v={10,20,-4,6,18,24,105,118};
  int n=v.size();

  //by sorting
  // sort(v.begin(),v.end());
  // int k=3;
  // int ele1=v[k-1];
  // cout<<ele1<<endl;

  //Using heap
  int k=2;
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