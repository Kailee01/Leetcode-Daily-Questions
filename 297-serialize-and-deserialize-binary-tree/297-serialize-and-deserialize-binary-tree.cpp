/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Codec {
public:
    int idx=0;
    string serialize(TreeNode* root) {
        if(!root){
            return "N";
        }
       return  to_string(root->val)+','+serialize(root->left)+serialize(root->right);
    }
    
    TreeNode* myDeserialize(string& data){
        if(data[idx]=='N'||idx==data.size()){//Base Case
            idx++;
            return NULL;
        }
        
        
    string nodeData="";
        int i=idx;
            while(data[i]!=','){//Concatinate the string for nodeData of Tree's Nodes
            nodeData.push_back(data[i]);
            i++;}
        
        idx+=(i-idx);// curIndex travelled by (i-idx) in while looop.
        int nodeDataVal=stoi(nodeData);
        TreeNode* root=new TreeNode(nodeDataVal);idx++;
        root->left=myDeserialize(data);
        root->right=myDeserialize(data);
        return root;
    }
    
    
    TreeNode* deserialize(string data) {
        int idx=0;
        return myDeserialize(data);
    }
};

// Your Codec object will be instantiated and called as such:
// Codec ser, deser;
// TreeNode* ans = deser.deserialize(ser.serialize(root));