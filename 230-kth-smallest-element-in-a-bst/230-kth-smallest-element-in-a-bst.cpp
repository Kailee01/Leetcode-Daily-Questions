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
 
 void in(TreeNode* root){
     if(!root) return ;
     in(root->left);
     ans.push_back(root->val);
     in(root->right);
 }
    
    
    int count,number;
 void helper(TreeNode* n) {
     cout<<n->val<<" "<<count<<endl;
      if (n->left) helper(n->left);
      count--;
      if (count == 0) {
          number = n->val;
          return;
      }
      if (n->right) helper(n->right);
  }
    
    
    
    
int answer=0,cnt=0; 
 void in1(TreeNode* root,int B){
     if(!root) return ;
     in1(root->left,B);
     cnt++;
     if(cnt==B){
         answer=root->val;
         return ;
     }
     in1(root->right,B);
 }
    
    int kthSmallest(TreeNode* root, int k) {
        in1(root,k);
        return answer;
        in(root);
        return ans[k-1];
        count=k;
        helper(root);
        return number;
    }
};