//Problem Link: https://leetcode.com/problems/maximum-units-on-a-truck/description/


class Solution {
public:
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        int ans=0;
        sort(boxTypes.begin(),boxTypes.end(),[](const auto& t1,const auto& t2){
            return t1[1]>t2[1];
        });
        for(auto pr:boxTypes){
            int unitPerBox=pr[1];
            int noOfBox=pr[0];
            if(noOfBox<truckSize){
                ans=ans+(unitPerBox*noOfBox);
                truckSize-=noOfBox;
            }
            else{
                ans=ans+(unitPerBox*truckSize);
                break;
            }
        }
        return ans;
    }
};