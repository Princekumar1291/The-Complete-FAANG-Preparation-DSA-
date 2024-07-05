class Solution {
public:
    void traverse(TreeNode* root, int x, int y, map<int, map<int, multiset<int>>>& nodes) {
        if (root==NULL) return ;
        nodes[x][y].insert(root -> val);
        traverse(root -> left, x - 1, y + 1, nodes);
        traverse(root -> right, x + 1, y + 1, nodes);
    }
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        map<int, map<int, multiset<int>>> nodes;
        traverse(root, 0, 0, nodes);
        vector<vector<int>> ans;
        for (auto p : nodes) {
            vector<int> col;
            for (auto q : p.second) {
                col.insert(col.end(), q.second.begin(), q.second.end());
            }
            ans.push_back(col);
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