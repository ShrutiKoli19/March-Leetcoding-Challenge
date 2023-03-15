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

    int totalNodes(TreeNode* root){

        if(root == NULL){
            return 0;
        }

        return 1 + totalNodes(root->left) + totalNodes(root->right);
    }

    bool DFS(TreeNode* root, int i, int n){

        if(root == NULL){
            return true;
        }

        if(i>=n){
            return false;
        }

        return DFS(root->left, 2*i+1, n) && DFS(root->right, 2*i+2, n);
    }

    bool isCompleteTree(TreeNode* root) {
        
        return DFS(root, 0, totalNodes(root));
    }
};
