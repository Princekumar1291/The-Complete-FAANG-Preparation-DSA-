#include<bits/stdc++.h>
using namespace std;

bool comp(pair <int,int> p1,pair<int,int> p2){
  if(p1.second<p2.second) return true;
  if(p1.second>p2.second) return false;
  if(p1.first>p2.first) return true;
  else return false;
}

int main(){
    vector<pair<int,int>> v({{1,2},{2,1},{4,1}});
    sort(v.begin(),v.end(),comp);

    for(auto ele:v) cout<<ele.first<<" "<<ele.second<<endl;
    return 0;
}