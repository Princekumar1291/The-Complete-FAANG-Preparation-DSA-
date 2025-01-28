//Problem Link: https://leetcode.com/problems/combination-sum/description/


#include<bits/stdc++.h>
using namespace std;

void helper(vector<int>& v, int i, int n, int sum, int target, vector<int>& temp, vector<vector<int>>& ans) {
    if (sum > target || i == n) return;
    if (sum == target) {
        ans.push_back(temp);
        return;
    }
    temp.push_back(v[i]);
    helper(v, i, n, sum + v[i], target, temp, ans);
    temp.pop_back();
    helper(v, i + 1, n, sum, target, temp, ans);
}

vector<vector<int>> combinationSum(vector<int>& v, int target) {
    vector<vector<int>> ans;
    int n = v.size();
    vector<int> temp;
    helper(v, 0, n, 0, target, temp, ans);
    return ans;
}

void print(vector<vector<int>>& v) {
    for (auto arr : v) {
        for (int ele : arr) {
            cout << ele << " ";
        }
        cout << endl;
    }
}

int main() {
    vector<int> v = {1, 2, 3, 5, 4, 2, 3};
    int target = 5;
    vector<vector<int>> ans = combinationSum(v, target);
    print(ans);
    return 0;
}