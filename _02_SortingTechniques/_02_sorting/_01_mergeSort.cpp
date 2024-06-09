//Problem Link: https://www.geeksforgeeks.org/problems/merge-sort/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=merge-sort

#include <bits/stdc++.h>
using namespace std;
void merge(int arr[], int l, int mid, int h){
  vector<int> v;
  int i = l;
  int j = mid + 1;

  // Merging the two halves
  while (i <= mid && j <= h){
    if (arr[i] <= arr[j]){
      v.push_back(arr[i]);
      i++;
    }
    else{
      v.push_back(arr[j]);
      j++;
    }
  }

  // Copying the remaining elements from the left subarray, if any
  while (i <= mid){
    v.push_back(arr[i]);
    i++;
  }

  // Copying the remaining elements from the right subarray, if any
  while (j <= h){
    v.push_back(arr[j]);
    j++;
  }

  // Copying the merged elements back into the original array
  int t = l;
  for (int k = 0; k < v.size(); k++){
    arr[t] = v[k];
    t++;
  }
}

void mergeSort(int arr[], int l, int h){
  if (l >= h) return;
  int mid = (l + h) / 2;
  mergeSort(arr, l, mid);
  mergeSort(arr, mid + 1, h);
  merge(arr, l, mid, h);
}

int main(){
  int arr[] = {12, 11, 13, 5, 6, 7};
  int arr_size = sizeof(arr) / sizeof(arr[0]);
  cout << "Given array is \n";
  for (int i = 0; i < arr_size; i++)
    cout << arr[i] << " ";
  cout << endl;
  mergeSort(arr, 0, arr_size - 1);
  cout << "Sorted array is \n";
  for (int i = 0; i < arr_size; i++)
    cout << arr[i] << " ";
  cout << endl;
  return 0;
}
