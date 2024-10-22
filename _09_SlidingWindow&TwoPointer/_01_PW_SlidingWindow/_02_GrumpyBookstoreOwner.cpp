// Problem Link: https://leetcode.com/problems/grumpy-bookstore-owner/description/


//Brute Force
class Solution {
public:
    int maxSatisfied(vector<int>& c, vector<int>& g, int t) {
        int n=g.size();
        int sum=0;
        int ans=0;
        for(int i=0;i<n;i++) if(g[i]==0) sum+=c[i];
        ans=sum;
        for(int i=0;i<=n-t;i++){
            int temp=sum;
            for(int j=i;j<i+t;j++){
                if(g[j]==1) temp+=c[j];
            }
            if(temp>ans) ans=temp;
        }
        return ans;
    }
};




//Sliding Window
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


//best
class Solution {
public:
    int maxSatisfied(vector<int>& c, vector<int>& g, int t) {
        int n=g.size();
        int sum=0;
        int ans=0;
        for(int i=0;i<n;i++) if(g[i]==0) sum+=c[i];
        for(int i=0;i<t;i++) if(g[i]==1) sum+=c[i];
        ans=sum;
        for(int i=t;i<n;i++){
            if(g[i]==1) sum+=c[i];
            if(g[i-t]==1) sum-=c[i-t];
            if(sum>ans) ans=sum;
        }
        return ans;
    }
};