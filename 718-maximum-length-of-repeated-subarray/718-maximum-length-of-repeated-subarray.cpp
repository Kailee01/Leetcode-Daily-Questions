class Solution {
public:
    int findLength(vector<int>& nums1, vector<int>& nums2) {
        int n=nums1.size(),m=nums2.size();
        vector<vector<int>>dp(2,vector<int>(m+1,0));
        int mx_ln=0;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                if(nums1[i-1]==nums2[j-1])dp[i%2][j]=dp[(i-1)%2][j-1]+1;
                else dp[i%2][j]=0;
                mx_ln=max(mx_ln,dp[i%2][j]);
            }
        }
        return mx_ln;
        
        /*
[1,0,0,0,1,0,0,1,0,0]
[0,1,1,1,0,1,1,1,0,0]
[0,1,1,1,1]
[1,0,1,0,1]
[1,2,3,2,2]
[3,2,1,4,7]
[1,2,3,2,1]
[3,2]
[1,2,3,2,1]
[3]
[1,2,3,2,1]
[39]
[1,2,3,2,1]
[11,23,34,56,75]
[1]
[2]
        */
    }
};