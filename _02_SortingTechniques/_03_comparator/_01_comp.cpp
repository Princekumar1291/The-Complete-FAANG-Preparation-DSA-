#include <bits/stdc++.h>
using namespace std;

bool myComp(const pair<int, int>& p1, const pair<int, int>& p2) {
    if (p1.first == p2.first) return p1.second < p2.second;
    else return p1.first > p2.first;
}

vector<int> sortByFreq(vector<int>& arr) {
    unordered_map<int, int> mp;
    for (auto ele : arr) mp[ele]++;

    vector<int> ans;
    vector<pair<int, int>> freq;
    for (auto ele : mp) freq.push_back({ele.second, ele.first});
    // sort(freq.begin(), freq.end(), myComp);    //or
    sort(freq.begin(), freq.end(), [](const pair<int,int>& p1,const pair<int,int>& p2){
        if(p1.first>p2.first) return true;
        else return false;
    });

    for (auto v : freq) {
        int c = v.first;
        while (c--) ans.push_back(v.second);
    }
    return ans;
}

int main() {
    vector<int> arr = {5, 3, 5, 3, 1, 1, 1, 5};
    vector<int> sortedArr = sortByFreq(arr);
    for (int num : sortedArr) {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}
