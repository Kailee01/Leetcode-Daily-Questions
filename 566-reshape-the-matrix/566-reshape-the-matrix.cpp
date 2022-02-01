class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int n=mat.size();
        int m=mat[0].size();
        if(n*m!=r*c){
            return mat;
        }
        
        vector<vector<int>> ans;
        vector<int>temp;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                temp.push_back(mat[i][j]);
                if(temp.size()==c){
                    ans.push_back(temp);
                    temp.clear();
                }
            }
        }
        return ans;
    }
};