//Problem Link: https://www.geeksforgeeks.org/problems/equilibrium-point-1587115620/1?page=1&difficulty%255B%255D=0&category%255B%255D=Arrays&sortBy=submissions



int equilibriumPoint(vector<long long> &arr) {
  int n=arr.size();
  long long sum=0;
  for(int i=0;i<n;i++) sum+=arr[i];
  long long pref=0;
  for(int i=0;i<n;i++){
      sum-=arr[i];
      if(sum==pref) return i+1;
      pref+=arr[i];
  }
  return -1;
}