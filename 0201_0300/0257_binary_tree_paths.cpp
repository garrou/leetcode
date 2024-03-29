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
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> res;        
        helper(root, res, "");
        return res;
    }
    
    void helper(TreeNode * root, vector<string> &res, string s) {
        if (!root) {
            return;
        }
        if (!root->left && !root->right) {
            res.push_back(s + to_string(root->val));
            return;
        } 
        helper(root->left, res, s + to_string(root->val) + "->");
        helper(root->right, res, s + to_string(root->val) + "->");
    }
};