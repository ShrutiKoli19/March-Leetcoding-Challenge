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

    TreeNode* BuildBT(vector<int>& inorder, int inStart, int inEnd, vector<int>& postorder, int posStart, int posEnd, unordered_map<int,int>& map){

        if(inStart > inEnd || posStart > posEnd){
            return NULL;
        }
        
        int rootNode = postorder[posEnd];
        TreeNode* root = new TreeNode(rootNode);
        int inorder_index =  map[rootNode];
        int pos_index = inorder_index - inStart;

        root->right = BuildBT(inorder, inorder_index+1, inEnd, postorder, posStart+pos_index, posEnd-1, map);
        root->left = BuildBT(inorder, inStart, inorder_index-1, postorder, posStart,  posStart + pos_index - 1, map);
        return root;

    }
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        int n = inorder.size();
        unordered_map<int, int> map;
        for(int i = 0; i<n; i++){

            map[inorder[i]] = i;
        }

        return BuildBT(inorder, 0, n-1, postorder, 0, n-1, map);
    }
};
