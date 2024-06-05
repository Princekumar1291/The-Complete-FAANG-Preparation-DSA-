#include<bits/stdc++.h>
using namespace std;
int removeDuplicatesBrut(int arr[], int n) {
  set < int > set;
  for (int i = 0; i < n; i++) {
    set.insert(arr[i]);
  }
  int k = set.size();
  int j = 0;
  for (int x: set) {
    arr[j++] = x;
  }
  return k;
}
int removeDublicate(int arr[],int n){  //t-->O(n)
  int j=1;                             //s-->O(1)
  for(int i=1;i<n;i++){
    if(arr[i]!=arr[i-1]) {
      arr[j]=arr[i];
      j++;
    }
  }
  return j;
}
int main(){
  int arr[] = {12, 12, 16, 16, 25, 33};
  int n= sizeof(arr) / sizeof(arr[0]);
  cout << "Given array is \n";
  for (int i = 0; i < n; i++) cout << arr[i] << " ";
  cout << endl;

  int sNew=removeDublicate(arr,n);
  for(int i=0;i<sNew;i++){
    cout<<arr[i]<<" ";
  }
  

  return 0;
}
