//Problem Link: https://www.geeksforgeeks.org/problems/greater-on-right-side4305/1?page=3&difficulty%255B%255D=-1&category%255B%255D=Arrays&sortBy=submissions




vector<int> nextGreatest(vector<int> arr) {
  int n=arr.size();
  int great=arr[n-1];
  arr[n-1]=-1;
  for(int i=n-2;i>=0;i--){
    int temp=great;
    great=max(great,arr[i]);
    arr[i]=temp;
  }
  return arr;
}