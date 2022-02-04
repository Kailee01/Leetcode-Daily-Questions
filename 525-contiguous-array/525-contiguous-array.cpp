class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int n=nums.size();

        map<int,int>check;
        int ans=0,cnt=0;
        // treat 0 as -1 and 1 as 1;
        for(int i=0;i<n;i++)        
        { cnt+=nums[i]==0?-1:1;
         
         if(cnt==0)ans=max(i+1,ans);
         
         if(check.count(cnt))ans=max(ans,i-check[cnt]);
         else check[cnt]=i;
         
         
            }
        return ans;
    }
};