// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

// Comparator function for sorting
bool myComp(const pair<int,int>& p1, const pair<int,int>& p2) {
    return p1.second < p2.second;
}

// Function to print vector of pairs
void printV(const vector<pair<int,int>>& v) {
    for(const auto& p : v) {
        cout << p.first << " " << p.second << endl;
    }
}

int main() {
    vector<pair<int,int>> v({{5,2},{5,3},{5,4},{8,3},{2,5}});
    sort(v.begin(), v.end(), myComp);
    printV(v);
    
    return 0;
}
