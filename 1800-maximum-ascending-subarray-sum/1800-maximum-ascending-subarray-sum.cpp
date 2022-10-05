class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        
        int mx=0;
        int cur_sum=mx=nums[0];
        for(int i=1;i<nums.size();i++){
            if(nums[i-1]<nums[i])cur_sum+=nums[i];
            else cur_sum=nums[i];
            
            mx=max(cur_sum,mx);
            
        }
        return mx;
        
    }
};