#include<bits/stdc++.h>
using namespace std;

int revPairs(vector<int> v){
  int n=v.size();
  int count=0;
  for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
      if(v[i] > 2 * v[j]) count++;
    }
  }
  return count;
}



void merge(vector<int>& v,int low,int mid,int high,int& count){
        vector<int> ans;
        int i=low;
        int j=mid+1;
        while(i<=mid && j<=high){
            if(v[i]<=v[j]){
                ans.push_back(v[i]);
                i++;
            }
            else {
                ans.push_back(v[j]);
                j++;
            }
        }
        while(i<=mid){
            ans.push_back(v[i]);
            i++;
        }
        while(j<=high){
            ans.push_back(v[j]);
            j++;
        }
        for(int i=low;i<=high;i++){
            v[i]=ans[i-low];
        }
    }

void countPairs(vector<int> &v, int low, int mid, int high,int& cnt ) {
    int right = mid + 1;
    for (int i = low; i <= mid; i++) {
        while (right <= high && v[i] > 2 * (long long)v[right]) right++;
        cnt += (right - (mid + 1));
    }
}

void mergeSort(vector<int>& v,int low,int high,int& count){
    if(low>=high) return ;
    int mid=(low+high)/2;
    mergeSort(v,low,mid,count);
    mergeSort(v,mid+1,high,count);
    countPairs(v, low, mid, high,count);
    merge(v,low,mid,high,count);
}



int main() {
    vector<int> test_vector = {40, 25, 19, 12, 9,6,2};
    int result = revPairs(test_vector);
    cout << "Number of reverse pairs: " << result << endl;
    
    return 0;
}