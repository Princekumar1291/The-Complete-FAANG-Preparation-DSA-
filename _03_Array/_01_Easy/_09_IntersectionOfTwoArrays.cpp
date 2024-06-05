#include <bits/stdc++.h>
using namespace std;

vector<int> intersection(vector<int> v1,vector<int> v2){
  vector<int> v;
  set<int> st;
  for(int i=0;i<v1.size();i++){
    bool check=false;
    for(int j=0;j<v2.size();j++){
      if(v1[i]==v2[j]) check=true;
    }
    if(check){
      st.insert(v1[i]);
    }
  }
  for(int i=0;i<v2.size();i++){
    bool check=false;
    for(int j=0;j<v1.size();j++){
      if(v2[i]==v1[j]) check=true;
    }
    if(check){
      st.insert(v2[i]);
    }
  }
  for(auto ele:st) v.push_back(ele);
  return v;
}

int NumberofElementsInIntersection(int a[], int b[], int n, int m){
  sort(a, a + n);
  sort(b, b + m);
  int count = 0;
  int i = 0;
  int j = 0;
  while (i < n && j < m){
    while (i > 0 && a[i] == a[i - 1]) i++;
    while (j > 0 && b[j] == b[j - 1]) j++;
    if (a[i] == b[j]){
      count++;
      i++;
      j++;
    }
    else if (a[i] < b[j]) i++;
    else j++;
  }
  return count;
}
int main(){
  int a[] = {1, 2, 2, 3, 4};
  int b[] = {2, 2, 3, 5};
  
  int n = sizeof(a) / sizeof(a[0]);
  int m = sizeof(b) / sizeof(b[0]);
  
  int result = NumberofElementsInIntersection(a, b, n, m);
  
  cout << "Number of elements in intersection: " << result << endl;

  vector<int> ans=intersection({1, 2, 2, 3, 4},{2, 2, 3, 5});
  for(int ele:ans)cout<<ele<<" ";
  return 0;
}