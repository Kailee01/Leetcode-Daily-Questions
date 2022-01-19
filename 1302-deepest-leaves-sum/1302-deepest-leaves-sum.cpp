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
    int deepestSum=0,height;
    int heightOfBT(TreeNode* root){
        if(!root) return -1;
        return 1+max(heightOfBT(root->left),heightOfBT(root->right));
    }
    
    void dfs(TreeNode* root,int curLevel){
        if(!root){
            return ;
        }
        
        if(curLevel==height){
            deepestSum+=root->val;
        }
        dfs(root->left,curLevel+1);
        dfs(root->right,curLevel+1);
    }
    
    int deepestLeavesSum(TreeNode* root) {
         height=heightOfBT(root);
        dfs(root,0);
        return deepestSum;
    }
};