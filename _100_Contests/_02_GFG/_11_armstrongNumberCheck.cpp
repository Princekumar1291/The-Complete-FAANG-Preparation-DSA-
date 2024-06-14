// Problem Link: https://www.geeksforgeeks.org/problems/armstrong-numbers2727/1



class Solution {
  public:
    string armstrongNumber(int n){
        int m=n;
        int ans=0;
        while(n>0){
            int rem=n%10;
            n/=10;
            ans=ans+pow(rem,3);
        }
        if(m==ans) return "Yes";
        return "No";
    }
};