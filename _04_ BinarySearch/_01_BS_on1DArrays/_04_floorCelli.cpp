#include<bits/stdc++.h>
using namespace std;

pair<int, int> getFloorAndCeil(vector<int> &v, int n, int x) {
	// Write your code here.
	int floor=-1;
	int celli=-1;
	int low=0;
	int high=n-1;
	while(low<=high){
		int mid=low+(high-low)/2;
		if(v[mid]>x) high=mid-1;
		else {
			floor=mid;
			low=mid+1;
		}
	}
	low=0;
	high=n-1;
	while(low<=high){
		int mid=low+(high-low)/2;
		if(v[mid]<x) low=mid+1;
		else {
			celli=mid;
			high=mid-1;
		}
	}
	if(floor>=0) floor=v[floor];
	if(celli>=0) celli=v[celli];

	return {floor,celli};
}

int main() {
	vector<int> v = {3, 4, 4, 7, 8, 10};
	int n = 6, x = 5;
	pair<int, int> ans = getFloorAndCeil(v, n, x);
	cout << "The floor and ceil are: " << ans.first
	     << " " << ans.second << endl;
	return 0;
}