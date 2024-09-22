#include<bits/stdc++.h>
using namespace std;
double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
  int n=nums1.size();
  int m=nums2.size();
  int i=0;
  int j=0;
  int t=m+n;
  if(t%2==1) {
      t=t/2+1;
      int temp=0;
      while(i<n && j< m){
          if(nums1[i]<nums2[j]){
              temp++;
              if(t==temp) return nums1[i];
              i++;
          }
          else {
              temp++;
              if(t==temp) return nums2[j];
              j++;
          }
      }
      while(i<n){
          temp++;
          if(t==temp) return nums1[i];
          i++;
      }
      while(j<m){
          temp++;
          if(t==temp) return nums2[j];
          j++;
      }
  }
  else{
      int m1=t/2;
      int m2=t/2+1;
      int c1=0;
      int c2=0;
      int temp1=0;
      int temp2=0;
      while(i<n && j<m){
          if(nums1[i]<nums2[j]){
              c1++;
              c2++;
              if(c1==m1) temp1=nums1[i];
              if(c2==m2) temp2=nums1[i];
              i++;
          }
          else{
              c1++;
              c2++;
              if(c1==m1) temp1=nums2[j];
              if(c2==m2) temp2=nums2[j];
              j++;
          }
      }
      while(i<n){
          c1++;
          c2++;
          if(c1==m1) temp1=nums1[i];
          if(c2==m2) temp2=nums1[i];
          i++;
      }
      while(j<m){
          c1++;
          c2++;
          if(c1==m1) temp1=nums2[j];
          if(c2==m2) temp2=nums2[j];
          j++;
      }
      return ((double)temp1+temp2)/2;
  }
  return -1; //dumy return 
}
int main(){
  int n,m;
  cin>>n>>m;
  vector<int> nums1(n);
  vector<int> nums2(m);
  for(int i=0;i<n;i++){
    cin>>nums1[i];
  }
  for(int i=0;i<m;i++){
    cin>>nums2[i];
  }
  cout<<findMedianSortedArrays(nums1,nums2);
  return 0;
}