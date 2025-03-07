// https://www.geeksforgeeks.org/problems/inversion-of-array-1587115620/1


#include<bits/stdc++.h>
using namespace std;

long long int inversionCount(long long arr[], long long n){   //O(n2)
  long long int count=0;
  for(int i=0;i<n;i++){
      for(int j=i+1;j<n;j++){
          if(arr[i]>arr[j] && i<j) count++;
      }
  }
  return count;
}


class Solution {
  public:
    // Function to count inversions in the array.
    void merge(vector<int>& arr,int low,int mid,int high,int& c){
        int i=low;
        int j=mid+1;
        vector<int> temp;
        while(i<=mid && j<=high){
            if(arr[i]<=arr[j]) temp.push_back(arr[i++]);
            else{
                temp.push_back(arr[j++]);
                c += mid- i +1;
            } 
        }
        while(i<=mid) temp.push_back(arr[i++]);
        while(j<=high) temp.push_back(arr[j++]);
        for(int t=low;t<=high;t++){
            arr[t]=temp[t-low];
        }
    }
    void mergesort(vector<int>& arr,int low,int high,int& c){
        if(low>=high) return;
        int mid=low+(high-low)/2;
        mergesort(arr,low,mid,c);
        mergesort(arr,mid+1,high,c);
        merge(arr,low,mid,high,c);
    }
    int inversionCount(vector<int> &arr) {
        int i=0;
        int n=arr.size();
        int c=0;
        mergesort(arr,i,n-1,c);
        return c;
    }
};