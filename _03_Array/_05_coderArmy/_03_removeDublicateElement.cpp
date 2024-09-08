//Problem Link: https://www.geeksforgeeks.org/problems/remove-duplicate-elements-from-sorted-array/1?page=1&difficulty%255B%255D=0&category%255B%255D=Arrays&sortBy=submissions



int remove_duplicate(vector<int> &arr) {
  // code here
  int n=arr.size();
  int j=0;
  for(int i=1;i<n;i++){
    if(arr[j]!=arr[i]){
      j++;
      arr[j]=arr[i];
    }
  }
  return j+1;
}