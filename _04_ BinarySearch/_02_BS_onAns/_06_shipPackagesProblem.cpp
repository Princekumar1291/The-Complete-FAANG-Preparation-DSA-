//Problem Link: https://leetcode.com/problems/capacity-to-ship-packages-within-d-days/description/


#include<bits/stdc++.h>
using namespace std;

int calDays(int mid,vector<int>& weights){
  int n=weights.size();
  int day=0;
  int sum=0;
  for(int i=0;i<n;i++){
      if(sum<mid){
          sum+=weights[i];
          if(sum==mid){
              day++;
              sum=0;
          }
          else if(sum>mid){
              day++;
              sum=weights[i];
          }
      }
  }
  if(sum!=0) day++;
  return day;
}
int shipWithinDays(vector<int>& weights, int days) {
  int totalWeights=0;
  for(int ele:weights) totalWeights+=ele;
  int low=*max_element(weights.begin(),weights.end());
  int high=totalWeights;
  int ans;
  while(low<=high){
      int mid=low+(high-low)/2;
      int tempDays=calDays(mid,weights);
      // cout<<mid<<" "<<tempDays<<endl;
      if(tempDays<=days){
          high=mid-1;
          ans=mid;
      }
      else low=mid+1;
  }
  return ans;
}

int main(){
  
  return 0;
}