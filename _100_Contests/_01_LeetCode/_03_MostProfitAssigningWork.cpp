// Problem Link: https://leetcode.com/problems/most-profit-assigning-work/description/?envType=daily-question&envId=2024-06-18


#include<bits/stdc++.h>
using namespace std;


int maxProfitAssignment(vector<int>& d, vector<int>& p, vector<int>& w) {
    vector<pair<int,int>> v;
    for(int i=0;i<d.size();i++){
        v.push_back({d[i],p[i]});
    }
    sort(v.begin(),v.end());
    int ans=0;

    for(int i=0;i<w.size();i++){
        int temp=0;
        for(int j=0;j<v.size();j++){
            if(v[j].first<=w[i]) {
                temp=max(temp,v[j].second);
            }
            else{
                break;
            }
        }
        ans=ans+temp;
    }
    return ans;
}


int main(){
  
  return 0;
}