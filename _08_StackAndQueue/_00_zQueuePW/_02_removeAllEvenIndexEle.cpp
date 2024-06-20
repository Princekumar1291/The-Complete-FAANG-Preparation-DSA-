#include<bits/stdc++.h>
using namespace std;

void display(queue<int> q){
  while(!q.empty()){
    cout<<q.front()<<" ";
    q.pop();
  }cout<<endl;
}

void remEvnIndEle(queue<int>& q){
  int n=q.size();
  for(int i=0;i<n;i++){
    if(i%2==0){
      q.pop();
    }
    else{
      int temp=q.front();
      q.pop();
      q.push(temp);
    }
  }
}


int main(){
  queue<int> q;
  q.push(10);
  q.push(20);
  q.push(30);
  q.push(40);
  q.push(50);

  display(q);
  remEvnIndEle(q);
  display(q);

  return 0;
}