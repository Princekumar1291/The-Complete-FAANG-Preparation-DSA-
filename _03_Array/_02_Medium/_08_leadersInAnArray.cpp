#include <bits/stdc++.h>
using namespace std;

vector<int> leadersBrut(int a[], int n)
{ // O(N2)
  vector<int> v;
  for (int i = 0; i < n; i++)
  {
    bool check = true;
    for (int j = i + 1; j < n; j++)
    {
      if (a[j] > a[i])
      {
        check = false;
        break;
      }
    }
    if (check)
      v.push_back(a[i]);
  }
  return v;
}

vector<int> leaders(int a[], int n){
  vector<int> v;
  int maxEle = a[n - 1];
  for (int i = n - 1; i >= 0; i--){
    if (a[i] >= maxEle) v.push_back(a[i]);
    maxEle = max(maxEle, a[i]);
  }
  reverse(v.begin(), v.end());
  return v;
}


int main() {
    int arr[] = {16, 17, 4, 3, 5, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    vector<int> result = leaders(arr, n);

    cout << "Leaders in the array are: ";
    for (int i : result) {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}