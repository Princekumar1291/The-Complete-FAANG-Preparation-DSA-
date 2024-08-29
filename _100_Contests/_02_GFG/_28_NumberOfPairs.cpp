//Problem Link: https://www.geeksforgeeks.org/problems/number-of-pairs-1587115620/1


class Solution {
  public:
    long long countPairs(vector<int> &arr, vector<int> &brr) {
        // Your Code goes here.
        int n=arr.size();
        int m=brr.size();
        sort(arr.begin(),arr.end());
        sort(brr.begin(),brr.end());
        long long ans=0;
        int c1=0,c2=0,c3=0,c4=0;
        for(int ele:brr){
            if(ele==1) c1++;
            else if(ele==2) c2++;
            else if(ele==3) c3++;
            else if(ele==4) c4++;
        }
        
        int j=0;
        for(int i=0;i<n;i++){
            if(arr[i]==1);
            else {
                ans=ans+c1;
                while(j<m && brr[j]<=arr[i]){
                    j++;
                }
                ans=ans+(m-j);
                if(arr[i]==2){
                    ans=ans-c3;
                    ans=ans-c4;
                }
                if(arr[i]==3) ans+=c2;
            }
        }
        return ans;
    }
};