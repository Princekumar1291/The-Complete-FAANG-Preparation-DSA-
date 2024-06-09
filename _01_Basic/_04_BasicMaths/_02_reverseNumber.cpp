// Problem Link: https://leetcode.com/problems/reverse-integer/description/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int reverse(int n) {
        long long revNumber=0;
        int x=abs(n);
        while(x>0){
            int rem=x%10;
            x/=10;
            revNumber=revNumber*10+rem;
        }
        if(n<0) revNumber=-revNumber;
        if(revNumber<INT_MIN || revNumber>INT_MAX) return 0;
        return revNumber;
    }
};