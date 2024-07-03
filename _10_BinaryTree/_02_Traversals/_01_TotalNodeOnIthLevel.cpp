//Problem Link: https://www.geeksforgeeks.org/problems/introduction-to-trees/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=introduction-to-trees


#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    int countNodes(int i) {
        // your code here
        return pow(2,i-1);
    }
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        int i;
        cin >> i;
        Solution ob;
        int res = ob.countNodes(i);

        cout << res;
        cout << "\n";
    }
}

