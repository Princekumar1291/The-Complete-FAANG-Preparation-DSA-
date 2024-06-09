// Problem Link: https://leetcode.com/problems/palindrome-number/description/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0) return false;
        string s1=to_string(x);
        string s2=s1;
        reverse(s2.begin(),s2.end());
        return s1==s2;
    }
};