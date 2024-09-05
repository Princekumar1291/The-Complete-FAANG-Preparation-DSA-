#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> tripletBrut(int n, vector<int> &arr) {
    set<vector<int>> st;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            for (int k = j + 1; k < n; k++) {
                if (arr[i] + arr[j] + arr[k] == 0) {
                    vector<int> temp = {arr[i], arr[j], arr[k]};
                    sort(temp.begin(), temp.end());
                    st.insert(temp);
                }
            }
        }
    }

    vector<vector<int>> ans(st.begin(), st.end());
    return ans;
}

vector<vector<int>> tripletBetter(int n, vector<int> &arr) {
  set<vector<int>> st;
  for (int i = 0; i < n; i++) {
      set<int> hashset;
      for (int j = i + 1; j < n; j++) {
          //Calculate the 3rd element:
          int third = -(arr[i] + arr[j]);

          //Find the element in the set:
          if (hashset.find(third) != hashset.end()) {
              vector<int> temp = {arr[i], arr[j], third};
              sort(temp.begin(), temp.end());
              st.insert(temp);
          }
          hashset.insert(arr[j]);
      }
  }
  vector<vector<int>> ans(st.begin(), st.end());
  return ans;
}

vector<vector<int>> threeSum(vector<int>& v) {
    int n=v.size();
    sort(v.begin(),v.end());
    vector<vector<int>> ans;
    for(int i=0;i<n;i++){
        if(i!=0 && v[i]==v[i-1]) continue;
        int j=i+1;
        int k=n-1;
        while(j<k){
            int sum=v[i]+v[j]+v[k];
            if(sum==0){
                ans.push_back({v[i],v[j],v[k]});
                int ele1=v[j];
                int ele2=v[k];
                j++;k--;
                while(j<k && v[j]==ele1) j++;
                while(j<k && v[k]==ele2) k--;
            }
            else if(sum<0) j++;
            else k--;
        }
    }
    return ans;
}

int main()
{
    vector<int> arr = { -1, 0, 1, 2, -1, -4};
    int n = arr.size();
    vector<vector<int>> ans = tripletBrut(n, arr);
    for (auto it : ans) {
        cout << "[";
        for (auto i : it) {
            cout << i << " ";
        }
        cout << "] ";
    }
    cout << "\n";
    return 0;
}

