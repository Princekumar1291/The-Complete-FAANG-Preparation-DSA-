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


void mergeSortedArray(long long arr[], long long start,long long end, long long mid,long long int &count){
    vector<long long> tempArray;
    
    long long index1 = start;
    long long index2 = mid+1;
    
    while(index1 <= mid && index2 <= end){
      if(arr[index1] <= arr[index2]){
          tempArray.push_back(arr[index1++]);
      }
      else{
          tempArray.push_back(arr[index2++]);
          count += mid + 1 - index1;
      }
    }
    
    while(index1 <= mid){
      tempArray.push_back(arr[index1++]);
    }
    
    while(index2 <= end){
      tempArray.push_back(arr[index2++]);
    }
    
    for(int i = 0; i < tempArray.size() && start <= end; i++){
      arr[start++] = tempArray[i];
    }
    return;
}
  
// break drown and sorting the array
void mergeSort(long long arr[], long long start, long long end, long long int &count){
  if(start >= end) return ;
  long long mid = start + (end - start) / 2;
  mergeSort(arr, start, mid, count);
  mergeSort(arr, mid+1, end, count);
  mergeSortedArray(arr, start, end, mid, count);
}
    
long long int inversionCount(long long arr[], long long N){
    long long  start = 0;
    long long end = N - 1;
    long long int count = 0;
    mergeSort(arr, start, end, count);
    return count;
}


int main() {
    long long arr[] = {5, 4, 3, 2, 1};
    long long n = sizeof(arr) / sizeof(arr[0]);
    cout << "Number of inversions: " << inversionCount(arr, n) << endl;

    return 0;
}
