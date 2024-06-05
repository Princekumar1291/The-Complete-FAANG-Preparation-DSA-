#include<bits/stdc++.h>
using namespace std;

vector<int> spiralOrder(vector<vector<int>> v){
  vector<int> ans;
  int left=0;
  int right=v[0].size()-1;
  int top=0;
  int bottom=v.size()-1;

  while(left<=right && top<=bottom){ //O(nm)
    for(int i=left;i<=right;i++){
      ans.push_back(v[top][i]);
    }
    top++;

    for(int i=top;i<=bottom;i++){
      ans.push_back(v[i][right]);
    }
    right--;

    if(left>right || top>bottom) break;
    for(int i=right;i>=left;i--){
      ans.push_back(v[bottom][i]);
    }
    bottom--;

    if(left>right || top>bottom) break;
    for(int i=bottom;i>=top;i--){
      ans.push_back(v[i][left]);
    }
    left++;
  }
  return ans;
}

int main() {
    vector<vector<int>> matrix = {
        {5, 10, 15},
        {20, 25, 30},
        {35, 40, 45}
    };

    for(auto ele:matrix){
      for(int item:ele){
        cout<<item<<" ";
      }
      cout<<endl;
    }
    
    vector<int> ans=spiralOrder(matrix);

    for(auto ele:ans){
        cout<<ele<<" ";
    }

    return 0;
}