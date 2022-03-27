class Solution {
public:
    
  bool isMatch1(string A, string B) {
    int n=A.size(),m=B.size();
    vector<vector<int>>dp(2,vector<int>(m+1,0));dp[0][0]=1;dp[1][0]=0;
    
        for(int j=1;j<=m;j++)if(B[j-1]=='*')dp[0][j]=dp[0][j-1];
        
     for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(A[i-1]==B[j-1]||B[j-1]=='?')dp[i%2][j]=dp[(i-1)%2][j-1];
            else if(B[j-1]=='*')dp[i%2][j]=(dp[i%2][j-1]||dp[(i-1)%2][j]);
            else dp[i%2][j]=0;
            dp[i%2][0]=0;
        }}
        
    return dp[n%2][m];
}

    
    
    bool isMatch(string s, string p) {
        return isMatch1(s,p);
    }
};