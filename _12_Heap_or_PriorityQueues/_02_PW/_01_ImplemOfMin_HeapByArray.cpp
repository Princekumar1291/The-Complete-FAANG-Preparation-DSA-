#include<bits/stdc++.h>
using namespace std;
class MinHeap{
  public:
  vector<int> arr;
  int i;
  MinHeap(){
    i=1;
    arr=vector<int>(1000);
  }
  int top(){
    if(i==1) return -1;
    return arr[1];
  }
  void push(int val){
    arr[i]=val;
    int curr=i;
    while(curr>=1){
      if(arr[curr]<arr[curr/2]) swap(arr[curr/2],arr[curr]);
      else break;
      curr=curr/2;
    }
    i++;
  }
  void pop(){
    if(i==1) {
      cout<<"Heap empty";
      return;
    }
    arr[1]=arr[i-1];
    i--;
    int curr=1;
    while(curr<i){
      int l=2*curr;
      int r=2*curr+1;
      if(l<i && arr[curr]>arr[l]){
        if(arr[r]<arr[l]){
          swap(arr[curr],arr[r]);
          curr=r;
        }
        else{
          swap(arr[curr],arr[l]);
          curr=l;
        }
      }
      else if(r<i && arr[curr]>arr[r]){
        if(arr[l]<arr[r]){
          swap(arr[curr],arr[l]);
          curr=l;
        }
        else{
          swap(arr[curr],arr[r]);
          curr=r;
        }
      }
      else break;
    }
  }
  int size(){
    return i-1;
  }
};



int main(){
  MinHeap mh;
  mh.push(10);
  mh.push(20);
  mh.push(3);
  mh.push(90);
  mh.push(50);
  mh.push(5);

  mh.pop();
  mh.pop();
  mh.pop();
  mh.pop();
  mh.pop();
  mh.pop();
  mh.pop();
  // cout<<mh.top()<<endl;
  
  
  return 0;
}


//for i 
//     left child--> 2*i
//     right child-->2*i+1
//     parrent is i/2