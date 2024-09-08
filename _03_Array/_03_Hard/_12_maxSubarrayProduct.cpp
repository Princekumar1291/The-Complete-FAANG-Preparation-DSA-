#include<bits/stdc++.h>
using namespace std;

int subarrayWithMaxProduct(vector<int> &arr){
	// Write your code here.
	int n=arr.size();
	long long maxPro=arr[0];
	long long pro=1;
	for(int i=0;i<n;i++){
		pro=1;
		for(int j=i;j<n;j++){
			pro*=arr[j];
			maxPro=max(maxPro,pro);
		}
	}
	return (int)maxPro;
}

int maxProduct(vector<int>& nums) {
        int n=nums.size();
        int maxPro=INT_MIN;
        int prefPro=1;
        int suffPro=1;
        for(int i=0;i<n;i++){
            if(prefPro==0) prefPro=1;
            if(suffPro==0) suffPro=1;
            prefPro*=nums[i];
            suffPro*=nums[n-i-1];
            maxPro=max(maxPro,prefPro);
            maxPro=max(maxPro,suffPro);
        }
        return maxPro;
    }


int maxProduct(vector<int>& nums) {
  int n = nums.size();
  int prePro = 1;
  int sufPro = 1;
  int ans = INT_MIN;

  for (int i = 0; i < n; i++) {
    prePro = (prePro == 0) ? nums[i] : prePro * nums[i];
    sufPro = (sufPro == 0) ? nums[n-1-i] : sufPro * nums[n-1-i];
    ans = max(ans, max(prePro, sufPro));
  }
  return ans;
}