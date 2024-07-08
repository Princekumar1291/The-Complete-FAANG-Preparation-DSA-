//Problem Link: https://www.geeksforgeeks.org/problems/search-in-a-rotated-array4618/1



class Solution {
  public:
    int search(vector<int>& arr, int target) {
        // complete the function here
        int n=arr.size();
        int i=0;
        int j=n-1;
        while(i<=j){
            int mid=(i+j)/2;
            if(arr[mid]==target) return mid;
            else if(arr[i]<=arr[mid]){ //between i and mid
                if(target>=arr[i] && target<=arr[mid]){
                    j=mid-1;
                }
                else i=mid+1;
            }
            else{
                if(target>=arr[mid] && target<=arr[j]){
                    i=mid+1;
                }
                else j=mid-1;
            }
        }
        return -1;
    }
};