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
    vector<int>chk;
    void preorder(TreeNode* root){
        if(root==NULL) return ;
        chk.push_back(root->val);
        preorder(root->left);
        preorder(root->right);
    }
    
    
    bool findTarget(TreeNode* root, int k) {
        chk.clear();
        preorder(root);
        unordered_set<int>mp;
        mp.clear();
        for(int i=0;i<chk.size();i++)
        {
            if(mp.count(k-chk[i]))return 1;
            else mp.insert(chk[i]);
    }
        return 0;        
        
    }
};