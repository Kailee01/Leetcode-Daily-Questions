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
 //     bool pre(TreeNode* root1,TreeNode* root2){
 //     if(root1==NULL&&root2==NULL) return true;
 //         // cout<<root1->val<<" "<<root2->val<<endl; 
 //      if(root1==NULL||root2==NULL) return false;
 //    return pre(root1->left,root2->left)&&pre(root1->right,root2->right)&&root1->val==root2->val;
 // } 
    
    
    
    
    bool isSame(TreeNode* root1,TreeNode* root2){
     if(!root1&&!root2) return true;
     else if(root1==NULL||root2==NULL) return false;
     
     cout<<root1->val<<" "<<root2->val<<endl;
     
     bool left=isSame(root1->left,root2->left);
     bool right=isSame(root1->right,root2->right);
     
     
     
     if(root1->val==root2->val&&left&&right) return true;
     else return false;
 }
    
    
    
    bool isSameTree(TreeNode* A, TreeNode* B) {
    // return pre(A,B) ;
        return isSame(A,B);
    }
};