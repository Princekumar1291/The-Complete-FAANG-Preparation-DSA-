#include <bits/stdc++.h>
using namespace std;
vector<int> findUnion(int arr1[], int arr2[], int n, int m){  //O(n)
  vector<int> v;
  int i = 0;
  int j = 0;
  while (i < n && j < m){
    if (v.size() > 0 && arr1[i] == v.back()) i++;
    else if (v.size() > 0 && arr2[j] == v.back()) j++;
    else if (arr1[i] <= arr2[j]) v.push_back(arr1[i++]);
    else v.push_back(arr2[j++]);
  }
  while (i < n){
    if (arr1[i] == v.back()){
      i++;
      continue;
    }
    v.push_back(arr1[i++]);
  }
  while (j < m){
    if (arr2[j] == v.back()){
      j++;
      continue;
    }
    v.push_back(arr2[j++]);
  }
  return v;
}

vector<int> findUnionBrut(int arr1[], int arr2[], int n, int m){  //O(nlogn)

  set<int> st;
  vector<int> v;
  
  for(int i=0;i<n;i++) st.insert(arr1[i]);
  for(int i=0;i<m;i++) st.insert(arr2[i]);

  for (auto ele : st) v.push_back(ele);
  return v;
}

int main(){
  int arr1[] = {1, 2, 4, 5, 6};
  int arr2[] = {2, 3, 5, 7};
  int n = sizeof(arr1) / sizeof(arr1[0]);
  int m = sizeof(arr2) / sizeof(arr2[0]);
  vector<int> result = findUnionBrut(arr1, arr2, n, m);

  cout << "Union of the two arrays is: ";
  for (int num : result){
    cout << num << " ";
  }
  cout << endl;
  return 0;
}