#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<pair<int,int>> v;
    v.push_back(make_pair(1,2));
    v.push_back(make_pair(2,4));
    v.push_back(make_pair(3,9));
    v.push_back({5,25});

    for(int i=0;i<v.size();i++){
      cout<<v[i].first<<" "<<v[i].second<<endl;
    }
    return 0;
}