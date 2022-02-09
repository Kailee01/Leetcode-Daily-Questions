class Solution {
public:
vector<vector<int>>dp;    
int moves[4][2] = { {-1,0},{1,0},{0,-1},{0,1} };
    int dfs(vector<vector<int>> &mat,int i,int j){
if(dp[i][j]!=0) return dp[i][j];
        dp[i][j]=1;
for(int k = 0; k < 4; k++){ 
int new_i = i + moves[k][0], new_j = j + moves[k][1];
if(new_i < 0 || new_j < 0 || new_i >= mat.size() || new_j >= mat[0].size() || mat[new_i][new_j] <= mat[i][j]) continue;
		dp[i][j] = max(dp[i][j], 1 + dfs(mat, new_i, new_j));
	}         
        return dp[i][j];
    }
    
    
    int longestIncreasingPath(vector<vector<int>>& matrix) {
        dp.resize(201,vector<int>(201,0));
        int maxPath=1;
        for(int i = 0; i < matrix.size(); i++)
		for(int j = 0; j < matrix[0].size(); j++)
			maxPath = max(maxPath, dfs(matrix, i, j));            
	return maxPath;
    }
};