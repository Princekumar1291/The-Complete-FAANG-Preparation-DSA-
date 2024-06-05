#include<bits/stdc++.h>
using namespace std;
bool checkSorted(int arr[],int n){ //O(n)
  for(int i=0;i<n-1;i++){
    if(arr[i]>arr[i+1]) return false;
  }
  return true;
}
int main(){
  int arr[] = {12, 12, 12, 12, 12, 12};
  int n= sizeof(arr) / sizeof(arr[0]);
  cout << "Given array is \n";
  for (int i = 0; i < n; i++) cout << arr[i] << " ";
  cout << endl;

  bool check=checkSorted(arr,n);
  if(check) cout<<"Array is sorted.";
  else cout<<"Array is not sorted.";
  return 0;
}
