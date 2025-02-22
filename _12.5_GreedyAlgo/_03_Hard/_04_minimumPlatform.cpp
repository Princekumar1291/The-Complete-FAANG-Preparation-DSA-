// https://www.geeksforgeeks.org/problems/minimum-platforms-1587115620/1



class Solution {
  public:
    int findPlatform(vector<int>& arr, vector<int>& dep) {
        sort(arr.begin(),arr.end());
        sort(dep.begin(),dep.end());
        int n=arr.size();
        int ans=0;
        int i=0;
        int j=0;
        int c=0;
        while(i<n){
            if(arr[i]<=dep[j]){
                c++;
                i++;
            }
            else{
                c--;
                j++;
            }
            ans=max(ans,c);
        }
        return ans;
    }
};