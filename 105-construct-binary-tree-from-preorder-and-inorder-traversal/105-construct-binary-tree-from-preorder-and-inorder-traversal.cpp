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
   int preIndex = 0;
    TreeNode* createBt(vector<int> &pre,vector<int> &in,int st,int end,unordered_map<int,int> &mp){
    if (st > end)
        return NULL;
    int curr = pre[preIndex++];
    TreeNode* root = new TreeNode(curr);
    if (st==end)
        return root;
    int idx = mp[curr];
    root->left = createBt(pre, in, st, idx - 1, mp);
    root->right = createBt(pre, in, idx + 1, end, mp);
    return root;
}
    TreeNode* buildTree(vector<int>& A, vector<int>& B) {
    unordered_map<int,int> mp;
    for(int i=0;i<A.size();i++)mp[B[i]]=i;
    return createBt(A,B,0,A.size()-1,mp);
}
};