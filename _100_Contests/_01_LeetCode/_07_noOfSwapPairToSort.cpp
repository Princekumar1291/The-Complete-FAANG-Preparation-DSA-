// Number of swapsing pair to make arr sorted



#include <bits/stdc++.h>
using namespace std;
int countSwaps(vector<int> arr, vector<int> target) {
    int n = arr.size();
    unordered_map<int, int> mp;
    for (int i = 0; i < n; i++) {
        mp[arr[i]] = i;
    }

    int swaps = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == target[i]) {
            continue;
        }
        swaps++;
        swap(mp[arr[i]],mp[target[i]]);
        swap(arr[i],arr[mp[arr[i]]]);
    }
    return swaps;
}

int lilysHomework(vector<int> arr) {
    vector<int> sortedArr = arr;
    sort(sortedArr.begin(), sortedArr.end());

    int swapsAsc = countSwaps(arr, sortedArr);
    reverse(sortedArr.begin(), sortedArr.end());
    int swapsDesc = countSwaps(arr, sortedArr);
    return min(swapsAsc, swapsDesc);
}

int main() {
    int n = 5;
    vector<int> arr = {1, 2, 5, 3, 4};
    int result = lilysHomework(arr);
    cout << result << endl;
    return 0;
}
