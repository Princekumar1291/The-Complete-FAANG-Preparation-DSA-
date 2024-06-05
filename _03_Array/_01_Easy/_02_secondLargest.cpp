#include<bits/stdc++.h>
using namespace std;

int secondlar(vector<int> v){
  int n=v.size();
  int sMax=-1;
  sort(v.begin(),v.end());
  for(int i=n-1;i>0;i--){
    if(v[i]!=v[i-1]) return v[i-1];
  }
  return -1;
}

int secondLargestElement(int arr[],int n){ //O(n)
  if(n<=1) return -1;
  int lar=arr[0];
  int sLar=INT_MIN;
  for(int i=0;i<n;i++){
    if(arr[i]>lar) {
      sLar=lar;
      lar=arr[i];
    }
    else if(arr[i]>sLar && arr[i]!=lar){
      sLar=arr[i];
    }
  }
  if(sLar==INT_MIN) return -1;
  return sLar;
}

int main(){
  int arr[] = {12, 12, 12, 12, 12, 12};
  int n= sizeof(arr) / sizeof(arr[0]);
  cout << "Given array is \n";
  for (int i = 0; i < n; i++) cout << arr[i] << " ";
  cout << endl;

  vector<int> v = {12, 12, 12, 12, 12, 12};
  int ans=secondlar(v);
  cout<<"Largest Element is: "<<ans;
  return 0;
}
