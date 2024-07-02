class Solution {
public:
    int height(TreeNode* root) {
        if (root == nullptr) return 0;
        return 1 + max(height(root->left), height(root->right));
    }

    void levelOrderPrint(TreeNode* root, int currentLevel, int targetLevel, vector<int>& result) {
        if (root == nullptr) return;
        if (currentLevel == targetLevel) {
            result.push_back(root->val);
            return;
        }
        currentLevel++;
        // Only increment the level when making the recursive calls
        levelOrderPrint(root->left, currentLevel , targetLevel, result);
        levelOrderPrint(root->right, currentLevel , targetLevel, result);
    }

    void levelOrderPrintOpp(TreeNode* root, int currentLevel, int targetLevel, vector<int>& result) {
        if (root == nullptr) return;
        if (currentLevel == targetLevel) {
            result.push_back(root->val);
            return;
        }
        currentLevel++;
        // Only increment the level when making the recursive calls
        levelOrderPrintOpp(root->right, currentLevel , targetLevel, result);
        levelOrderPrintOpp(root->left, currentLevel , targetLevel, result);
    }

    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        int treeHeight = height(root);
        vector<vector<int>> result;
        for (int i = 1; i <= treeHeight; i++) {
            vector<int> levelNodes;
            if (i % 2 != 0) {
                levelOrderPrint(root, 1, i, levelNodes);
            } else {
                levelOrderPrintOpp(root, 1, i, levelNodes);
            }
            result.push_back(levelNodes);
        }
        return result;
    }
};
