//Problem Link: https://www.geeksforgeeks.org/problems/peak-element/1?page=1&difficulty%255B%255D=0&category%255B%255D=Arrays&sortBy=submissions




int peakElement(int arr[], int n){
  if(n==1) return 0;
  if(arr[0]>=arr[1]) return 0;
  for(int i=1;i<n-1;i++){
      if(arr[i]>=arr[i-1] && arr[i]>=arr[i+1]) return i;
  }
  if(arr[n-2]<=arr[n-1]) return n-1;
  return -1;
}