#include<bits/stdc++.h>
using namespace std;

string frequencySort(string s) {
  int n = s.size();
  vector<vector<int>> v(256, vector<int>({0, -1}));
  for(int i = 0; i < n; i++){
    v[s[i]][0]++;
    v[s[i]][1] = s[i];
  }
  sort(v.begin(), v.end(), comparator);

  string ans="";
  for(int i=0;i<256;i++){
    while(v[i][0]>0){
      char temp=v[i][1];
      ans+=temp;
      v[i][0]--;
    }
  }

  return ans;
}



static bool comparator(const pair<int, int>& p1, const pair<int, int>& p2) {
  return p1.first > p2.first;
}

string frequencySort(string s) {
  int n = s.size();
  vector<pair<int,int>> v(256,pair<int,int>(0,-1));
  for(int i = 0; i < n; i++){
      v[s[i]].first++;
      v[s[i]].second = s[i];
  }
  sort(v.begin(), v.end(), comparator);

  string ans="";
  for(int i=0;i<256;i++){
      while(v[i].first>0){
          char temp=v[i].second;
          ans+=temp;
          v[i].first--;
      }
  }

  return ans;
}

int main(){
  
  return 0;
}