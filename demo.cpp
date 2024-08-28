// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

// Comparator function for sorting
bool myComp(const vector<int>& v1, const vector<int>& v2) {
    if (v1[0] == v2[0]) {
        return v1[1] > v2[1];  // If first elements are the same, sort by the second element in descending order
    }
    return v1[0] < v2[0];  // Otherwise, sort by the first element in ascending order
}

// Function to print vector of vectors
void printVV(const vector<vector<int>>& vv) {
    for(const auto& v : vv) {
        for(const auto& elem : v) {
            cout << elem << " ";
        }
        cout << endl;
    }
}

int main() {
    vector<vector<int>> vv({
        {5, 2, 9, 7, 3},
        {5, 3, 7, 8, 1},
        {3, 4, 1, 5, 2},
        {8, 3, 6, 9, 4},
        {3, 5, 8, 2, 6}
    });
    
    // Sort using custom comparator
    sort(vv.begin(), vv.end(), myComp);
    
    // Print the sorted vector of vectors
    printVV(vv);
    
    return 0;
}
