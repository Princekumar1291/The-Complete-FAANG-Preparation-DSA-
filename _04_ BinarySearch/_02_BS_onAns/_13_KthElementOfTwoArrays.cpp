#include<bits/stdc++.h>
using namespace std;
int kthElement(int k, vector<int>& arr1, vector<int>& arr2) {
  // code here
  int count=0;
  int i=0;
  int j=0;
  int n=arr1.size();
  int m=arr2.size();
  while(i<n && j<m){
      if(arr1[i]<arr2[j]){
          count++;
          if(count==k) return arr1[i];
          i++;
      }
      else {
          count++;
          if(count==k) return arr2[j];
          j++;
      }
  }
  while(i<n){
      count++;
      if(count==k) return arr1[i];
      i++;
  }
  while(j<m){ 
      count++;
      if(count==k) return arr2[j];
      j++;
  }
  return  -1; //dumy return 
}
int main(){
  vector<int> arr1={1,2,3,4,5};
  vector<int> arr2={6,7,8,9,10};
  int k=5;
  int ans=kthElement(k,arr1,arr2);
  cout<<ans<<endl;
  return 0;
}