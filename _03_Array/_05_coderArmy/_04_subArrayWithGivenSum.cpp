//Problem Link: https://www.geeksforgeeks.org/problems/subarray-with-given-sum-1587115621/1?page=1&difficulty%255B%255D=0&category%255B%255D=Arrays&sortBy=submissions






vector<int> subarraySum(vector<int> arr, int n, long long s) {
  int l=0;
  long long sum=0;
  for(int i=0;i<n;i++){
    sum+=arr[i];
    while(l<i && sum>s){
        sum-=arr[l];
        l++;
    }
    if(sum==s){
        return {l+1,i+1};
    }
  }
  return {-1};
}