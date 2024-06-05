#include<bits/stdc++.h>
using namespace std;

int lowerBound(vector<int>v,int x) {
  int n=v.size();
	int ans=n;
	int low=0;
	int high=n-1;
	while(low<=high){
		int mid=low+(high-low)/2;
		if(v[mid]<x){
			low=mid+1;
		}
		else{
			ans=mid;
			high=mid-1;
		}
	}
	return ans;
}

int upperBound(vector<int> arr, int x){
  int n=arr.size();
	int ans=n;
	int low=0;
	int high=n-1;
	while(low<=high){
		int mid=low+(high-low)/2;
		if(arr[mid]<=x){
			low=mid+1;
		}
		else{
			ans=mid;
			high=mid-1;
		}
	}
	return ans;
}

int stlLowerBound(vector<int> v,int target){
  int ans=lower_bound(v.begin(),v.end(),target)-v.begin();
}

int stlUpperBound(vector<int> v,int target){
  int ans=upper_bound(v.begin(),v.end(),target)-v.begin();
}

int main(){
  vector<int> v={1,2,3,3,5,8,8,10,10,11};
  int target=6;
  int ans=lowerBound(v,target);
  cout<<ans<<endl;
  ans=stlLowerBound(v,target);
  cout<<ans<<endl;
  return 0;
}