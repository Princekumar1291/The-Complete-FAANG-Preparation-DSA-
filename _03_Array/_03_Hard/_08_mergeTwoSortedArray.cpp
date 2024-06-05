#include<bits/stdc++.h>
using namespace std;

vector<long long> mergeTwoSortedArray(vector<long long> &a, vector<long long> &b){
	// Write your code here.
	int n=a.size();
	int m=b.size();
	vector<long long> ans;
	int i=0;
	int j=0;
	while(i<n && j<m){
		if(a[i]<=b[j]){
			ans.push_back(a[i]);
			i++;
		}
		else {
			ans.push_back(b[j]);
			j++;
		}
	}
	while(i<n){
		ans.push_back(a[i]);
		i++;
	}
	while(j<m){
		ans.push_back(b[j]);
		j++;
	}
  return ans;
}

void mergeTwoSortedArrayWithOutUsingSpace(vector<long long> &a, vector<long long> &b){
  int n=a.size();   //O(nlogn)
  int m=b.size();
  int i=n-1;
  int j=0;
  while(i>=0 && j<m){
    if(a[i]>b[j]){
      swap(a[i],b[j]);
      i--;
      j++;
    }
    else break;
  }
  sort(a.begin(),a.end());
  sort(b.begin(),b.end());
}

void mergeOpt(vector<int>& nums1, int m, vector<int>& nums2, int n) {
  int i=m-1;
  int j=n-1;
  int k=m+n-1;

  while(i>=0 && j>=0){
      if(nums1[i]>nums2[j]){
          nums1[k]=nums1[i];
          k--;
          i--;
      }
      else{
          nums1[k]=nums2[j];
          j--;
          k--;
      }
  }
  while(i>=0){
      nums1[k--]=nums1[i--];
  }
  while(j>=0){
      nums1[k--]=nums2[j--];
  }
}

int main() {
    vector<long long> a = {1, 3, 5, 7, 9};
    vector<long long> b = {2, 4, 6, 8, 10};

    mergeTwoSortedArrayWithOutUsingSpace(a, b);

    cout << "Merged without using extra space: ";
    for (auto num : a) {
        cout << num << " ";
    }
    for (auto num : b) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}