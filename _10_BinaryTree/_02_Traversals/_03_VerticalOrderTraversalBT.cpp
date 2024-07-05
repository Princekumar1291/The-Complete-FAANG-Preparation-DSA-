class Solution {
public:
    void helper(TreeNode* root,auto& mp,int i,int j){
        if(root==NULL) return ;
        mp[i][j].insert(root->val);
        helper(root->left,mp,i-1,j+1);
        helper(root->right,mp,i+1,j+1);
    }
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        vector<vector<int>> ans;
        map<int,map<int,multiset<int>>> mp;
        helper(root,mp,0,0);
        for(auto ele:mp){
            vector<int> temp;
            for(auto el:ele.second){
                for(auto e:el.second) temp.push_back(e);
            }
            ans.push_back(temp);
        }
        return ans;
    }
};

/*
nodes = {
    -2: {2: [4]},
    -1: {1: [2]},
     0: {0: [1], 2: [6, 6]},
     1: {1: [3]},
     2: {2: [7]}
}
*/