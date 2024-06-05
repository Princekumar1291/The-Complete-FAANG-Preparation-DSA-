#include<bits/stdc++.h>
using namespace std;

void insertioinSort(int arr[] ,int n){
  for(int i=0;i<n;i++){
    for(int j=i;j>0;j--){
      if(arr[j]<arr[j-1]) swap(arr[j-1],arr[j]);
      else break;
    }
  }
}
int main(){
    int arr[]={10,97,12,8,6,23,48,6,21,10};
    int n=sizeof(arr)/sizeof(arr[0]);
    insertioinSort(arr,n);  
    for(auto ele:arr) cout<<ele<<" ";
    return 0;
}