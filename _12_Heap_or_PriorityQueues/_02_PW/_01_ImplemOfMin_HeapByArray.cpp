#include<bits/stdc++.h>
using namespace std;
class MinHeap{
  public:
  vector<int> arr;
  int i;
  MinHeap(){
    arr=vector<int>(1000);
    i=1;
  }
  void push(int val){
    arr[i]=val;
    int curr=i;
    i++;
    while(curr>1){
      if(arr[curr]<arr[curr/2]){
        swap(arr[curr],arr[curr/2]);
        curr=curr/2;
      }
      else break;
    }
  }
  int top(){
    if(i==1) return -1;
    return arr[1];
  }
  void pop(){
    if(i==1){
      cout<<"Heap empty";
      return;
    }
    arr[1]=arr[i-1];
    i--;
    int curr=1;
    while(curr*2<i){
      int l=2*curr;
      int r=l+1;
      if(r<i && arr[r]<arr[l] && arr[r]<arr[curr]){
        swap(arr[curr],arr[r]);
        curr=r;
      }
      else if(arr[l]<arr[curr]){
        swap(arr[curr],arr[l]);
        curr=l;
      }
      else break;
    }
  }
  int size(){
    return i-1;
  }
};
int main(){
  MinHeap mhp;
  mhp.push(10);
  mhp.push(20);
  mhp.push(3);
  mhp.push(90);
  mhp.push(0);
  cout<<mhp.top()<<endl;
  mhp.pop();
  cout<<mhp.top()<<endl;
  mhp.pop();
  cout<<mhp.top()<<endl;
  mhp.pop();
  cout<<mhp.top()<<endl;
  mhp.pop();
  cout<<mhp.top()<<endl;
  mhp.pop();
  cout<<mhp.top()<<endl;
  return 0;
}