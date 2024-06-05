#include<bits/stdc++.h>
using namespace std;

int remAnagram(string str1, string str2){
  int arr[256]={0};
  int n1=str1.size();
  int n2=str2.size();
  for(int i=0;i<n1;i++){
    arr[str1[i]]++;
  }
  for(int i=0;i<n2;i++){
    arr[str2[i]]--;
  }
  int ans=0;
  for(int i=97;i<125;i++){
    ans+=abs(arr[i]);
  }
  return ans;
}

int main(){
  
  return 0;
}