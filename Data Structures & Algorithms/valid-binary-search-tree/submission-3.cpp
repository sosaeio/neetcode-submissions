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
    bool cValid(TreeNode* root, long long lValue, long long rValue){
        if(!root) return true;
        if(!(lValue < root->val && root->val < rValue)) return false;
        return cValid(root->left, lValue, root->val) && cValid(root->right, root->val, rValue);
    }
    bool isValidBST(TreeNode* root) {
        return cValid(root, numeric_limits<long long>::min(), numeric_limits<long long>::max());
    }
};
