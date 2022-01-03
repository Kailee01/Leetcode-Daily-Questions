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
    vector<int>ans;
 int level=0;
 void rightView(TreeNode* root,int cur_level){
if(root==NULL)  return ;
if(cur_level>level)ans.push_back(root->val),level=cur_level;
// cout<<cur_level<<" "<<root->val<<endl;
rightView(root->right,cur_level+1);
rightView(root->left,cur_level+1);
 }
    
    vector<int> rightSideView(TreeNode* root) {
          ans.clear();
    level=0;
    rightView(root,1);
    return ans;
        
    }
};