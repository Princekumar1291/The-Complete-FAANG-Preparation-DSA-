//Problem Link: https://leetcode.com/problems/lexicographically-smallest-string-after-a-swap/description/




class Solution {
public:
    string getSmallestString(string s) {
        int n = s.size();
        for (int i = 0; i < n - 1; i++) {
            if ((s[i] % 2) == (s[i + 1] % 2) ) { 
                if (s[i] > s[i + 1]) {
                    swap(s[i], s[i + 1]);
                    break; 
                }
            }
        }
        return s;
    }
};