//Problem Link: https://www.geeksforgeeks.org/problems/bubble-sort/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=bubble-sort

#include<bits/stdc++.h>
using namespace std;

void bubbleSort(int arr[] ,int n){
  for(int i=0;i<n-1;i++){
    for(int j=1;j<n-i;j++){
      if(arr[j-1]>arr[j]) swap(arr[j-1],arr[j]);
    }
  }
}
void bubbleSort2(int arr[] ,int n){
  for(int i=0;i<n-1;i++){
    bool check=true;
    for(int j=1;j<n-i;j++){
      if(arr[j-1]>arr[j]) {
        swap(arr[j-1],arr[j]);
        check=false;
      }
    }
    if(check) break;
  }
}

int main(){
    int arr[]={456,97,12,8,6,23,48,6,21,8};
    int n=sizeof(arr)/sizeof(arr[0]);
    bubbleSort(arr,n);  
    for(auto ele:arr) cout<<ele<<" ";
    return 0;
}