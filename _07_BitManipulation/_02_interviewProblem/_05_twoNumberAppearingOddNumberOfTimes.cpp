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


int main(){
  
  return 0;
}