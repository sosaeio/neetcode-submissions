/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

class Solution {
public:
    bool checkValid(TreeNode* root, long long leftValue, long long rightValue){
        if(!root) return true;
        if(!(leftValue < root->val && root->val < rightValue)) return false;
        return checkValid(root->left, leftValue, root->val) && checkValid(root->right, root->val, rightValue);
    }
    bool isValidBST(TreeNode* root) {
        return checkValid(root, numeric_limits<long long>::min(), numeric_limits<long long>::max());
    }
};
