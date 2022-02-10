class Solution {
public:
    int jump(vector<int>& nums) {
//         bf just dp o(n*max(a[i]));
        int n=nums.size();
        vector<int>dp(n,INT_MAX);dp[0]=0;
        for(int i=0;i<nums.size();i++){
            int no=nums[i],next=i+1;
            while(next<n&&no>0){
                dp[next]=min(dp[i]+1,dp[next]);
                next++,no--;
                            }
                              }
                 // return dp[nums.size()-1];
        
//          optimised o(n) dp one go;
        
        // vector<int>dp1(100005,INT_MAX);dp1[0]=0;
      
            int curEnd = 0;
        int cufFarthest = 0;
        int jumpStep = 0;

        for (int i = 0; i <nums.size() -1; i++) {
            cufFarthest = max(cufFarthest, nums[i] + i);
            if(i == curEnd)
            {
                jumpStep++;
                curEnd = cufFarthest;
            }
            if(curEnd >= nums.size() -1)break;

        }
        return jumpStep;  
    }
};

