#include<bits/stdc++.h>
using namespace std;

class Stack{
  public:
  int arr[1000];
  int indx;
  Stack(){
    indx=-1;
  }
  void push(int val){
    if(indx<=998){
      arr[++indx]=val;
    }
    else{
      cout<<"Stack is full.";
    }
  }
  int pop(){
    if(indx>=0){
      return arr[indx--];
    }
    return -1;
  }
  int size(){
    return indx+1;
  }
  void display(){
    for(int i=0;i<=indx;i++){
      cout<<arr[i]<<" ";
    }cout<<endl;
  }

};

int main(){
  Stack st;
  st.push(10);
  st.push(20);
  st.push(30);
  st.push(40);
  st.display();
  st.pop();
  st.display();
  return 0;
}