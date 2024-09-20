//Problem Link: https://leetcode.com/problems/minimum-number-of-days-to-make-m-bouquets/description/


#include<bits/stdc++.h>
using namespace std;

int minDays(vector<int>& bloomDay, int m, int k) {
    int n=bloomDay.size();
    int low=1;
    int high=*max_element(bloomDay.begin(),bloomDay.end());
    int ans=-1;
    while(low<=high){
        int mid=low+(high-low)/2;
        int bouquet=0;
        int temp=0;
        for(int i=0;i<n;i++){
            if(bloomDay[i]<=mid) temp++;
            else {
                temp=0;
            }
            if(temp==k){
                bouquet++;
                temp=0;
            }
        }
        if(bouquet<m){
            low=mid+1;
        }
        else{
            ans=mid;
            high=mid-1;
        }
    }
    return ans;
}

int main() {
    vector<int> v = {1, 10, 3, 10, 2};
    int m = 3;
    int k = 1;
    
    int result = minDays(v, m, k);
    cout << "Minimum days to form " << m << " bouquets: " << result << endl;
    
    return 0;
}