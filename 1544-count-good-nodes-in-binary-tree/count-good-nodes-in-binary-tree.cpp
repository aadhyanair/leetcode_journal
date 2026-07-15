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
    int dfs(TreeNode* node,int maxsofar){
        if (node==NULL)return 0;
        int good=0;
        if(node->val>=maxsofar){
            good=1;
        }
        maxsofar=max(maxsofar,node->val);
        return good+dfs(node->left,maxsofar)+dfs(node->right,maxsofar);
    }
    int goodNodes(TreeNode* root) {
        return dfs(root,root->val);
        
    }
};