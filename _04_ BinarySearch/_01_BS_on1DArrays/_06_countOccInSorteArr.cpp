#include<bits/stdc++.h>
using namespace std;

int lower(int arr[],int n,int x){
  int ans=-1;
  int low=0;
  int high=n-1;
  while(low<=high){
      int mid=low+(high-low)/2;
      if(arr[mid]==x){
          ans=mid;
          high=mid-1;
      }
      else if(arr[mid]>x) high=mid-1;
      else low=mid+1;
  }
  return ans;
}	
int higher(int arr[],int n,int x){
  int ans=-1;
  int low=0;
  int high=n-1;
  while(low<=high){
      int mid=low+(high-low)/2;
      if(arr[mid]==x){
          ans=mid;
          low=mid+1;
      }
      else if(arr[mid]>x) high=mid-1;
      else low=mid+1;
  }
  return ans;
}	
int count(int arr[], int n, int x) {
    int lo=lower(arr,n,x);
    if(lo==-1) return 0;
    int hi=higher(arr,n,x);
    int ans=hi-lo+1;
}

int main(){
    int arr[] = {1, 2, 2, 2, 3, 4, 4, 5, 5, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 2;
    int result = count(arr, n, x);
    cout << "The count of " << x << " in the array is: " << result << endl;
    return 0;
}