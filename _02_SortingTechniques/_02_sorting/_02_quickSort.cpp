//Problem Link: https://www.geeksforgeeks.org/problems/quick-sort/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=quick-sort

#include <bits/stdc++.h>
using namespace std;
int partation(int arr[],int low,int high){
  int pivVal=arr[low];
  int i=low;
  int j=high;
  while(i<=j){
    while(arr[i]<=pivVal) i++;
    while(arr[j]>pivVal) j--;
    if(i<j) swap(arr[i],arr[j]);
  }
  swap(arr[low],arr[j]);
  return j;
}
void quickSort(int arr[], int low, int high){
  if(low>=high) return;
  int pIndex=partation(arr,low,high);
  quickSort(arr,low,pIndex-1);
  quickSort(arr,pIndex+1,high);
}
int main()
{
  int arr[] = {12, 11, 13, 5, 6, 7};
  int arr_size = sizeof(arr) / sizeof(arr[0]);
  cout << "Given array is \n";
  for (int i = 0; i < arr_size; i++)
    cout << arr[i] << " ";
  cout << endl; 

  quickSort(arr, 0, arr_size - 1);

  cout << "Sorted array is \n";
  for (int i = 0; i < arr_size; i++)
    cout << arr[i] << " ";
  cout << endl;

  return 0;
}


//time comp= O(nlogn)
//space com=O(1)