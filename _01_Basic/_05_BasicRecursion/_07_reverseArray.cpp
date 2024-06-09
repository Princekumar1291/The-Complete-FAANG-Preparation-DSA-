//Problem Link: https://www.geeksforgeeks.org/problems/reverse-array-in-groups0255/1

#include<bits/stdc++.h>
using namespace std;

void revArray(int arr[],int i,int j){
  if(i>j) return;
  swap(arr[i],arr[j]);
  revArray(arr,i+1,j-1);
}

int main(){
    int arr[]={12,23,45,56,67,78};
    revArray(arr,0,5);
    for(auto ele:arr) cout<<ele<<" ";

    return 0;
}