//Problem Link: https://www.geeksforgeeks.org/problems/missing-element-of-ap2228/1?page=2&difficulty%255B%255D=0&status%255B%255D=solved&category%255B%255D=Arrays&sortBy=submissions



class Solution {
  public:
    int findMissing(vector<int> &arr) {
        int n=arr.size();
        int d=(arr[n-1]-arr[0])/n;
        int ap=arr[0];
        for(int i=1;i<n;i++){
            ap+=d;
            if(ap!=arr[i]) return ap;
        }
    }
};
