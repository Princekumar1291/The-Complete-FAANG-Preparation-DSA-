//Problem Link: https://leetcode.com/problems/maximum-units-on-a-truck/description/


#include<bits/stdc++.h>
using namespace std;
int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
  int n=boxTypes.size();
  int ans=0;
  for(int i=0;i<n;i++){
      reverse(boxTypes[i].begin(),boxTypes[i].end());
  }
  sort(boxTypes.begin(),boxTypes.end(),greater<vector<int>>());
  for(int i=0;i<n && truckSize>0;i++){
      if(boxTypes[i][1]<=truckSize){
          ans+=(boxTypes[i][0]*boxTypes[i][1]);
          truckSize-=boxTypes[i][1];
      }
      else{
          ans+=(truckSize*boxTypes[i][0]);
          truckSize=0;
          break;
      }
  }
  return ans;
}
int maximumUnits2(vector<vector<int>>& boxTypes, int truckSize) {
        int n=boxTypes.size();
        int ans=0;
        sort(boxTypes.begin(),boxTypes.end(),[](const vector<int>& a,vector<int>&b){
            return a[1]>b[1];
        });
        for(int i=0;i<n;i++){
            if(boxTypes[i][0]<=truckSize){
                ans+=(boxTypes[i][0]*boxTypes[i][1]);
                truckSize-=boxTypes[i][0];
            }
            else{
                ans+=(truckSize*boxTypes[i][1]);
                truckSize=0;
                break;
            }
        }
        return ans;
    }
int main(){
  vector<vector<int>> boxTypes={{1,3},{2,2},{3,1}};
  int truckSize=4;
  cout<<maximumUnits(boxTypes,truckSize);
  return 0;
}