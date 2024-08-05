//Problem Link:https://www.geeksforgeeks.org/problems/graph-and-vertices/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=graph-and-vertices




class Solution {
  public:
    long long count(int n) {
        long long temp=n*(n-1)/2;
        return pow(2,temp);
    }
};
