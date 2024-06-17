// Problem Link: https://www.geeksforgeeks.org/problems/two-numbers-with-odd-occurrences5846/1



#include<bits/stdc++.h>
using namespace std;

vector<long long int> twoOddNum(long long int Arr[], long long int N) {
    unordered_map<long long, long long> mp;
    for (long long i = 0; i < N; i++) {
        mp[Arr[i]]++;
    }
    
    // Vector to store the result
    vector<long long> v;
    
    // Find elements with odd counts
    for (auto ele : mp) {
        if (ele.second % 2 != 0) {
            v.push_back(ele.first);
        }
    }
    
    // Sort the result in descending order
    sort(v.rbegin(), v.rend());
    
    return v;
}


vector<long long int> twoOddNum(long long int Arr[], long long int n){
    long long xr=0;
    for(int i=0;i<n;i++){
        xr=xr^Arr[i];
    }
    long long xr0=xr&(~(xr-1));
    long long xr1=0;
    long long xr2=0;
    for(int i=0;i<n;i++){
        if((xr0&Arr[i])!=0) xr1=xr1^Arr[i]; 
        else xr2=xr2^Arr[i];
    }
    vector<long long int> v;
    if(xr1>xr2){
        v.push_back(xr1);
        v.push_back(xr2);
    }
    else{
        v.push_back(xr2);
        v.push_back(xr1);
    }
    return v;
}


int main(){
  
  return 0;
}