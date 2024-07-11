#include<bits/stdc++.h>
using namespace std;
void heapSort(vector<int> &v){
  priority_queue<int> pq;
  for(int ele:v){
    pq.push(ele);
  }
  int j=v.size()-1;
  while(!pq.empty()){ 
    v[j]=pq.top();
    pq.pop();
    j--;
  }
}
int main(){
  vector<int> v={10,2,8,23,3,454,4};
  heapSort(v);
  for(int ele:v)cout<<ele<<" ";
  return 0;
}

// O(nlong(n)) 