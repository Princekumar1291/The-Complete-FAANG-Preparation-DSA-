// Problem Link: https://leetcode.com/problems/grumpy-bookstore-owner/description/

class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
        int n=grumpy.size();
        int temp1=0;
        int max1Ind=0;
        int notSat=0;
        int tempNotSat=0;
        for(int i=0;i<minutes;i++) {
            if(grumpy[i]==1) {
                temp1++;
                tempNotSat+=customers[i];
            }
        }
        notSat=tempNotSat;

        for(int i=minutes;i<n;i++){
            temp1=temp1+grumpy[i]-grumpy[i-minutes];
            if(grumpy[i]==1){
                tempNotSat+=customers[i];
            }
            if(grumpy[i-minutes]==1){
                tempNotSat-=customers[i-minutes];
            }
            if(tempNotSat>notSat && temp1>0){
                max1Ind=i-minutes+1;
                notSat=tempNotSat;
            }
        }
        int ans=0;
        for(int i=0;i<n;i++){
            if(i>=max1Ind && i<max1Ind+minutes){
                ans+=customers[i];
            }
            else{
                if(grumpy[i]==0) ans+=customers[i];
            }
        }
        return ans;
    }
};