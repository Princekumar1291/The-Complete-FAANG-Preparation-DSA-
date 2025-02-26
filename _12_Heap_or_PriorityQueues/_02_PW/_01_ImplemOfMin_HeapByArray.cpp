#include<bits/stdc++.h>
using namespace std;
class MinHeap{
  public:
  vector<int> arr;
  int i;
  MinHeap(){
    arr=vector<int>(1000);
    i=0;
  }
  void push(int val){
    arr[i]=val;
    int curr=i;
    i++;
    while(curr>0){
      int par=(curr-1)/2;
      if(arr[curr]<arr[par]){
        swap(arr[curr],arr[par]);
        curr=par;
      }
      else break;
    }
  }
  int top(){
    if(i==0) return -1;
    return arr[0];
  }
  void pop(){
    if(i==0){
      cout<<"Heap empty";
      return;
    }
    arr[0]=arr[i-1];
    i--;
    int curr=0;
    while(true){
      int l=2*curr+1;
      int r=2*curr+2;
      if(r<i && arr[r]<arr[l] && arr[r]<arr[curr]){
        swap(arr[curr],arr[r]);
        curr=r;
      }
      else if(l<i && arr[l]<arr[curr]){
        swap(arr[curr],arr[l]);
        curr=l;
      }
      else break;
    }
  }
  int size(){
    return i;
  }
  void display(){
    for(int t=0;t<i;t++) {
      cout<<arr[t]<<" ";
    }
    cout<<endl;
  }
};
int main(){
  MinHeap mhp;
  mhp.push(10);
  mhp.push(20);
  mhp.push(3);
  mhp.push(90);
  mhp.push(0);
  mhp.display();
  cout<<mhp.top()<<endl;
  mhp.pop();
  cout<<mhp.top()<<endl;
  mhp.pop();
  cout<<mhp.top()<<endl;
  return 0;
}