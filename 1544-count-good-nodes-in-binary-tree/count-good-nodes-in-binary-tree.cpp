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
    int dfs(TreeNode* node,int maxsoFar){
        if(!node) return 0;
        int count=0;
        if(node->val >= maxsoFar) count=1;
        maxsoFar= max(maxsoFar, node->val);

        count+= dfs(node->left,maxsoFar);
        count+= dfs(node->right,maxsoFar);

        return count;

    }
    int goodNodes(TreeNode* root) {
        return dfs(root, root->val);
        
    }
};