class Solution {
public:
    bool isSet(int n,int bit){
        return ((n&(1<<bit))>0);
    }
    vector<int> smallestSubarrays(vector<int>& nums) {
        int n=nums.size();
     vector<int>ans(n),last(31);
        
        for(int i=n-1;i>=0;i--){
            ans[i]=1;
            for(int bit=0;bit<31;bit++){
                if(isSet(nums[i],bit)){
                    last[bit]=i;
                }
                
                ans[i]=max(ans[i],last[bit]-i+1);
            }
        }
        return ans;
    }
};