//Problem Link: https://leetcode.com/problems/3sum-closest/



class Solution {
public:
    int threeSumClosest(vector<int>& arr, int target) {
        sort(arr.begin(),arr.end());
        int gap=INT_MAX;
        int ans;
        int n=arr.size();
        for(int i=0;i<n-2;i++){
            int j=i+1;
            int k=n-1;
            while(j<k){
                int sum=arr[i]+arr[j]+arr[k];
                int currGap=abs(sum-target);
                if(currGap<gap){
                    ans=sum;
                    gap=currGap;
                }
                if(sum<target) j++;
                else k--;
            }
        }
        return ans;
    }
};