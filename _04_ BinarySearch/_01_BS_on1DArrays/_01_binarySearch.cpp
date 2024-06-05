#include<bits/stdc++.h>
using namespace std;
int binarySearchIterative(vector<int>& v, int target) {
  int low=0;
  int high=v.size()-1;
  while(low<=high){
      int mid=(low+high)/2;
      if(v[mid]==target) return mid;
      else if(v[mid]<target) low=mid+1;
      else high=mid-1;
  }
  return -1;
}

int binarySearchRec(vector<int> v,int low,int high,int target){  //O(logN) 
  if(low>high) return -1;
  int mid=(low+high)/2;
  if(v[mid]==target) return mid;
  else if(v[mid]<target) return binarySearchRec(v,mid+1,high,target);
  else return binarySearchRec(v,low,mid-1,target);
}

int main() {
  vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int target = 7;
  int index = binarySearchIterative(v,target);
  if (index != -1) cout << "Element found at index: " << index << endl;
  else cout << "Element not found" << endl;
  return 0;
}