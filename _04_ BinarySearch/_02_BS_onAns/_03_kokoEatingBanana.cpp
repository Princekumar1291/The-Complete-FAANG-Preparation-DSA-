//Problem Link: https://leetcode.com/problems/koko-eating-bananas/description/

#include<bits/stdc++.h>
using namespace std;

int minEatingSpeed(vector<int>& piles, int h) {
    int n=piles.size();
    int maxEle=*max_element(piles.begin(),piles.end());
    int low=1;int high=maxEle;
    int ans;
    while(low<=high){
        int mid=low+(high-low)/2;
        int hr=0;
        for(int i=0;i<n;i++){
            hr+=piles[i]/mid;
            if(piles[i]%mid!=0) hr++;
            if(hr>h) break;
        }
        if(hr>h){
            low=mid+1;
        }
        else{
            high=mid-1;
            ans=mid;
        }
    }
    return ans;
}


int main() {
    vector<int> piles = {3, 6, 7, 11};
    int h = 8;

    cout << "Piles: ";
    for (int pile : piles) {
        cout << pile << " ";
    }
    cout << "\nHours: " << h << endl;

    int result = minEatingSpeed(piles, h);
    cout << "The minimum eating speed is: " << result << endl;

    return 0;
}