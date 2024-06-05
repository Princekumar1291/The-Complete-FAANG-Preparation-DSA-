#include <bits/stdc++.h>
using namespace std;
int missingNumberBrut(vector<int> &v){
  int n=v.size();
  for(int i=0;i<=n;i++){
    int check=0;
    for(int j=0;j<n;j++){
      if(v[j]==i){
        check=1;
        break;
      }
    }
    if(check==0) return i;
  }
}

int missingNumberBetter(vector<int> &a, int N){
  int hash[N + 1] = {0}; // hash array
  for (int i = 0; i < N - 1; i++)
    hash[a[i]]++;
  for (int i = 1; i <= N; i++){
    if (hash[i] == 0){
      return i;
    }
  }
  return -1;
}

int missingNumberOptimal(vector<int> &nums){
  int n = nums.size();
  int sum = 0;
  int res = n * (n + 1) / 2;
  for (int i=0;i<nums.size();i++) sum+=nums[i];
  return res - sum;
}

int missingNumberMostOptimal(vector<int> v){
  int n=v.size();
  int x1=0;
  int x2=0;
  for(int i=0;i<n;i++){
    x1=x1^i;
    x2=x2^v[i];
  }
  x1=x1^n;
  return x1^x2;
}

int main(){
  vector<int> nums {9,6,4,2,3,5,7,0,1};
  int ans=missingNumberMostOptimal(nums);
  cout<<ans<<endl;
  return 0;
}

// 0^n= n
// n^n=0