class Solution {
public:
    void helper(vector<int>& v, int target,vector<int> temp,vector<vector<int>>& ans,int i){
        if(i==v.size()) {
            if(target==0) ans.push_back(temp);
            return ;
        }
        //pick the element
        if(v[i]<=target){
            temp.push_back(v[i]);
            helper(v,target-v[i],temp,ans,i);
            temp.pop_back();
        }
        helper(v,target,temp,ans,i+1);
    }
    vector<vector<int>> combinationSum(vector<int>& v, int target) {
        vector<vector<int>> ans;
        vector<int> temp;
        helper(v,target,temp,ans,0);
        return ans;
    }
};