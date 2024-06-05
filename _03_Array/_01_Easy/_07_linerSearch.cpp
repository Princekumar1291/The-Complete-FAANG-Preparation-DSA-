#include <bits/stdc++.h>
using namespace std;
int linerSearch(vector<int>& v,int target){
  for(int i=0;i<v.size();i++){
    if(v[i]==target) return i;
  }
  return -1;
}
int main(){
  vector<int> v = {0, 12, 0, 2, 25, 33};
  int n= v.size();
  cout << "Given array is \n";
  for (int i = 0; i < n; i++) cout << v[i] << " ";
  cout << endl<<"After rotation : ";
  int result=linerSearch(v,2);
  cout<<"Element at index: "<<result;
  return 0;
}