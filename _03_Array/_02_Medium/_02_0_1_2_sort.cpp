#include<bits/stdc++.h>
using namespace std;

void sort012(vector<int>& v){  //O(n)
  int n=v.size();
  int n0=0;
  int n1=0;
  int n2=0;
  for(int i=0;i<n;i++){
    if(v[i]==0) n0++;
    else if(v[i]==1) n1++;
    else n2++;
  }
  int t=0;
  while(n0>0) {
    v[t++]=0;
    n0--;
  }
  while(n1>0) {
    v[t++]=1;
    n1--;
  }
  while(n2>0){
    v[t++]=2;
    n2--;
  }
  
}

void sort012ByTwoPointer(vector<int> &v){ //O(n)
  int n = v.size();
  int low = 0;
  int mid = 0;
  int high = n - 1;
  while (mid <= high){
    if (v[mid] == 0){
      swap(v[low], v[mid]);
      mid++;
      low++;
    }
    else if (v[mid] == 1) mid++;
    else{
      swap(v[mid], v[high]);
      high--;
    }
  }
}

int main(){
  vector<int> v = {0, 2, 1, 1,0,1,2,2,1,0,1,2,0,1,0,2};
  int target1 = 9;
  sort012ByTwoPointer(v);
  cout << "V: ";
  for (int i : v) cout << i << " ";
  cout << endl;
  return 0;
}