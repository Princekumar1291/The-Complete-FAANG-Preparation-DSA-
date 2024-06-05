#include<bits/stdc++.h>
using namespace std;

vector<int> queryResults(int limit, vector<vector<int>>& v) {
  int n=v.size();
  vector<int> ans;
  unordered_map<int,int> balls;
  unordered_map<int,int> colors;
  for(int i=0;i<n;i++){
      int b=v[i][0];
      int c=v[i][1];
      if(balls.find(b)!=balls.end()){
          colors[balls[b]]--;
          if(colors[balls[b]]==0) colors.erase(balls[b]);
      }
      balls[b]=c;
      colors[c]++;
      ans.push_back(colors.size());
  }
  return ans;
}

int main(){
    // Test case 1
    int limit1 = 4;
    vector<vector<int>> queries1 = {{1, 4}, {2, 5}, {1, 3}, {3, 4}};
    vector<int> result1 = queryResults(limit1, queries1);
    cout << "Test case 1:" << endl;
    for (int res : result1) {
        cout << res << " ";
    }
    cout << endl;

    // Test case 2
    int limit2 = 4;
    vector<vector<int>> queries2 = {{0, 1}, {1, 2}, {2, 2}, {3, 4}, {4, 5}};
    vector<int> result2 = queryResults(limit2, queries2);
    cout << "Test case 2:" << endl;
    for (int res : result2) {
        cout << res << " ";
    }
    cout << endl;

    return 0;
}