#include<bits/stdc++.h>
using namespace std;
int largestElement(int arr[],int n){ //O(n)
  int lar=arr[0];
  for(int i=0;i<n;i++){
    if(arr[i]>lar) lar=arr[i];
  }
  return lar;
}
int main(){
  int arr[] = {12, 11, 13, 5, 6, 7};
  int n= sizeof(arr) / sizeof(arr[0]);
  cout << "Given array is \n";
  for (int i = 0; i < n; i++) cout << arr[i] << " ";
  cout << endl;

  int ans=largestElement(arr,n);
  cout<<"Largest Element is: "<<ans;
  return 0;
}
