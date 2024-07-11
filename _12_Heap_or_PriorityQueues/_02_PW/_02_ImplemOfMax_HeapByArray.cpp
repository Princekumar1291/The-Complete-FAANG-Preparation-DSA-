#include<bits/stdc++.h>
using namespace std;
class MaxHeap{
  public:
  int i;
  vector<int> v;
  MaxHeap(){
    i=1;
    v=vector<int>(1000);
  }
  int size(){
    return i-1;
  }
  int top(){
    if(i==1){
      cout<<"Heap is empty ";
      return -1;
    }
    return v[1];
  }
  void push(int val){
    v[i]=val;
    int curr=i;
    while(curr>1){
      if(v[curr]>v[curr/2]){
        swap(v[curr],v[curr/2]);
        curr=curr/2;
      }
      else break;
    }
    i++;
  }

  void pop(){
    if(i==1){
      cout<<"Heap is empty";
      return ;
    }
    v[1]=v[i-1];
    i--;
    int curr=1;
    while(curr<i){
      int l=2*curr;
      int r=2*curr+1;
      if(l<i && v[curr]<v[l]){
        if(r<i && v[r]>v[l]){
          swap(v[curr],v[r]);
          curr=r;
        }
        else{
          swap(v[curr],v[l]);
          curr=l;
        }
      }
      else if(r<i && v[curr]<v[r]){
        if(v[l]>v[r]){
          swap(v[curr],v[l]);
          curr=l;
        }
        else{
          swap(v[curr],v[r]);
          curr=r;
        }
      }
      else break;
    } 
  }
};


int main(){
  MaxHeap mh;
  mh.push(10);
  mh.push(5);
  mh.push(12);
  mh.push(20);
  mh.push(25);
  mh.push(30);
  mh.push(1);

  cout<<mh.top()<<endl;
  mh.pop();
  cout<<mh.top()<<endl;
  mh.pop();
  cout<<mh.top()<<endl;
  mh.pop();
  cout<<mh.top()<<endl;
  mh.pop();
  cout<<mh.top()<<endl;
  mh.pop();
  cout<<mh.top()<<endl;
  mh.pop();
  cout<<mh.top()<<endl;

  return 0;
}