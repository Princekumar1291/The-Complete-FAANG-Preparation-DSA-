//Problem Link: https://leetcode.com/problems/sort-array-by-increasing-frequency/description/




class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int> mp;
        for(auto ele:nums) mp[ele]++;

        vector<vector<int>> temp;
        for(auto ele:mp){
            temp.push_back({ele.second,ele.first});
        }
        sort(temp.begin(),temp.end());

        vector<int> ans;
        vector<int> temp2;
        for(int j=1;j<=temp[0][0];j++) temp2.push_back(temp[0][1]);

        int i=1;
        while(i<temp.size()){
            if(temp[i][0]==temp[i-1][0]){
                for(int l=1;l<=temp[i][0];l++){
                    temp2.push_back(temp[i][1]);
                }
                i++;
            }
            else{
                reverse(temp2.begin(),temp2.end());
                for(int l=0;l<temp2.size();l++){
                    ans.push_back(temp2[l]);
                }
                temp2.clear();
                for(int l=1;l<=temp[i][0];l++){
                    temp2.push_back(temp[i][1]);
                }
                i++;
            }
        }
        if(temp2.size()>0){
            reverse(temp2.begin(),temp2.end());
            for(int l=0;l<temp2.size();l++){
                ans.push_back(temp2[l]);
            }
            temp2.clear();
        }
        return ans;
    }
};