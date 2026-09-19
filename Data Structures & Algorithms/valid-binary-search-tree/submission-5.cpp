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
    bool check(TreeNode* node, long long leftVal, long long rightVal){
        if(!node) return true;
        if(!(leftVal < node->val && node->val < rightVal)) return false;
        return check(node->left, leftVal, node->val) && check(node->right, node->val, rightVal);
    }
    bool isValidBST(TreeNode* root) {
        return  check(root, numeric_limits<long long>::min(), numeric_limits<long long>::max());
    }
};
