#include<bits/stdc++.h>
using namespace std;

class Queue{
  public:
  int f;
  int b;
  int arr[1000];
  Queue(){
    f=0;
    b=0;
  }
  void push(int val){
    if(b==1000) {
      cout<<"Queue is full";
      return ;
    }
    arr[b++]=val;
  }
  int back(){
    if(f-b==0) {
      cout<<"queue is empty";
      return;
    }
    return arr[b-1];
  }
  int front(){
    if(f-b==0) {
      cout<<"queue is empty";
      return;
    }
    return arr[f];
  }
  void pop(){
    if(f-b==0) {
      cout<<"queue is empty";
      return;
    }
    f++;
  }
  void display(){
    for(int i=f;i<b;i++){
      cout<<arr[i]<<" ";
    }cout<<endl;
  }
  int size(){
    return b-f;
  }

};

int main(){
  Queue q;
  q.push(10);
  q.push(20);
  q.push(30);
  q.push(40);
  q.push(50);
  q.display();
  q.pop();
  q.display();
  cout<<"Front: "<<q.front()<<endl;
  cout<<"Back: "<<q.back()<<endl;
  cout<<q.size()<<endl; 



  return 0;
}