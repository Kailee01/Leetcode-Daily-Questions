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
    class robbery{
        public:
        int with_rob=0,without_rob=0;
    };
    
    robbery tryRob(TreeNode* root){
        if(root==NULL) {
          robbery rob_null;   
            return rob_null;
        }
        
        robbery left=tryRob(root->left);
        robbery right=tryRob(root->right);
        robbery cur_ans ;
        
// take current node and then take left,right witout_rob
// don't take the current node and take sum of max (with,without) from each left,right;
cur_ans.with_rob=root->val+left.without_rob+right.without_rob;   
cur_ans.without_rob=max(left.without_rob,left.with_rob)+max(right.without_rob,right.with_rob);

return cur_ans;        
    }
    
    int rob(TreeNode* root) {
        robbery ans=tryRob(root);
        return max(ans.with_rob,ans.without_rob);
    }
};