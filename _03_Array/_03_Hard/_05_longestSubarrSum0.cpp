#include<bits/stdc++.h>
using namespace std;

int maxLen(vector<int>& arr, int n) {
    unordered_map<int,int> mp;
    int ans=0;
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
        if(sum==0) ans=i+1;
        if(mp.find(sum)!=mp.end()){
            ans=max(ans,(i-mp[sum]));
        }
        if(mp.find(sum)==mp.end()) mp[sum]=i;
    }
    return ans;
}


int main() {
    vector<int> arr = {15, -2, 2, -8, 1, 7, 10, 23};
    int n = arr.size();
    cout << "Maximum length of subarray with 0 sum: " << maxLen(arr, n) << endl;
    return 0;
}