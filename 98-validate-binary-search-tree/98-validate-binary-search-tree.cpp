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
    
 int is=1;
 void isValid(TreeNode* root,long long &p){
     if(!root) return;
    isValid(root->left,p);

// cout<<root->val<<", "<<p<<endl;
     if(root->val<=p)is=0;
     p=root->val;
    isValid(root->right,p);
 }
int isValidBST(TreeNode* root) {
// if(!root->left&&!root->right) return 1;
    is=1;
    long long p=-1e17;
    // We Can pass the previous as refrence as it will remain same in each fun call cz will only modify according to us.
// But we can also declare as globally.   same  for is,p;
    isValid(root,p);
    return is;
}
};