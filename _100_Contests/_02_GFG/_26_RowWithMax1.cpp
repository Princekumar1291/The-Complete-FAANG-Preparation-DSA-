//Problem Link: https://www.geeksforgeeks.org/problems/row-with-max-1s0023/1




class Solution {
  public:
    int rowWithMax1s(vector<vector<int> > &arr) {
        // code here
        int n=arr.size();
        int m=arr[0].size();
        
        int i=0;
        int j=m-1;
        
        int ans=-1;
        while(i<n && j>=0){
            if(arr[i][j]==1){
                j--;
                ans=i;
            }
            else{
                i++;
            }
        }
        return ans;
    }
};