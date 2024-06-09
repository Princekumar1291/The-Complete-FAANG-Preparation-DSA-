//Problem Link: https://www.geeksforgeeks.org/problems/selection-sort/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=selection-sort

#include<bits/stdc++.h>
using namespace std;

void selectionSort(int arr[],int n){
  for(int i=0;i<n-1;i++){
    int min=arr[i];
    for(int j=i+1;j<n;j++){
      if(arr[j]<arr[i]) swap(arr[j],arr[i]);
    }
  }
}
void selectionSort2(int arr[],int n){
  for(int i=0;i<n-1;i++){
    int min=i;
    for(int j=i+1;j<n;j++){
      if(arr[j]<arr[min]) min=j;
    }
    swap(arr[min],arr[i]);
  }
}

int main(){
    int arr[]={456,97,12,8,6,23,48,6,21,8};
    int n=sizeof(arr)/sizeof(arr[0]);
    selectionSort2(arr,n);
    for(auto ele:arr) cout<<ele<<" ";
    return 0;
}