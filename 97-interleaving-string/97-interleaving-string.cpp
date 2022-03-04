class Solution {
public:
    int dp[101][101];
    bool interleave(string& s1,string& s2,string& s3,int i,int j,int k){
    if(k==s3.size())return i==s1.size()&&j==s2.size();
    if(dp[i][j]!=-1) return dp[i][j];
    if(s1[i]==s2[j]&&s2[j]==s3[k]) return dp[i][j]=interleave(s1,s2,s3,i+1,j,k+1)||interleave(s1,s2,s3,i,j+1,k+1);
    else if(s1[i]==s3[k]&&i<s1.size()&&k<s3.size()) 
        return dp[i][j]= interleave(s1,s2,s3,i+1,j,k+1);
    else if(s2[j]==s3[k]&&j<s2.size()&&k<s3.size()) 
        return dp[i][j]=interleave(s1,s2,s3,i,j+1,k+1);    
    else return 0;
      
}
    bool isInterleave(string s1, string s2, string s3) {
        memset(dp,-1,sizeof(dp));
             int n1=s1.size(),n2=s2.size(),n3=s3.size();
    // if(n1+n2!=n3) return 0;
        return interleave(s1,s2,s3,0,0,0);
        
    }
};