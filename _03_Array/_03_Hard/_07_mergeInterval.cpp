#include<bits/stdc++.h>
using namespace std;

void mergeIntervalBrut(vector<vector<int>>& v){
  sort(v.begin(),v.end()); //T->  O(nlogn+2n)
	int n=v.size();         // S-> o(2n)
	vector<vector<int>> ans;
	for(int i=0;i<n;i++){
		int first=v[i][0];
		int second=v[i][1];
		if(!ans.empty() && second<=ans.back()[1]) continue;
		for(int j=i+1;j<n;j++){
			if(v[j][0]<=second){
				if(v[j][1]>=second) second=v[j][1];
			}
			else  break;
		}
		vector<int> temp={first,second};
		ans.push_back(temp);
	}
  v=ans;
}

void mergeIntervalOpt(vector<vector<int>>& v){
int n=v.size(); //O(nlogn)
  sort(v.begin(),v.end());
  vector<vector<int>> ans;
  for(int i=0;i<n;i++){
      if(i==0 || v[i][0]>ans.back()[1]){
          ans.push_back(v[i]);
      }
      else {
          ans.back()[1]=max(v[i][1],ans.back()[1]);
      }
  }
  v=ans;
  }

int main(){
  vector<vector<int>> v={{1, 3}, {2, 6}, {8, 10}, {12, 18}};
  mergeIntervalOpt(v);
  for(auto ele:v){
    for(auto e:ele) cout<<e<<" ";
    cout<<endl;
  }
  return 0;
}