//Problem Link: https://leetcode.com/problems/convert-sorted-array-to-binary-search-tree/description/


class Solution {
public:
    TreeNode* helper(vector<int>& nums,int lo,int hi) {
        if(lo>hi) return NULL;
        int mid=lo+(hi-lo)/2;
        TreeNode* root=new TreeNode(nums[mid]);
        root->left= helper(nums,lo,mid-1);
        root->right= helper(nums,mid+1,hi);
        return root;
    }
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        int n=nums.size();
        return helper(nums,0,n-1);
    }
};