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
    bool checkValid(TreeNode* node, long long leftValue, long long rightValue){
        if(!node) return true;
        if(!(leftValue < node->val && node->val < rightValue)) return false;
        return checkValid(node->left, leftValue, node->val) && checkValid(node->right, node->val, rightValue);
    }
    bool isValidBST(TreeNode* root) {
     return checkValid(root, numeric_limits<long long>::min(), numeric_limits<long long>::max());   
    }
};
