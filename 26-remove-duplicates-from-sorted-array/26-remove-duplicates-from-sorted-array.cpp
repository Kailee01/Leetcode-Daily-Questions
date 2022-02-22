class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        int i=0,j=0,n=nums.size();
        if(n<=1) return n;
        while(j<n-1){
            if(nums[j]==nums[j+1]){
                while(j<n-1&&nums[j]==nums[j+1])j++;
                
            }
            nums[i++]=nums[j++];
        }
        if(nums[n-1]!=nums[n-2])nums[i++]=nums[n-1];
        return i;
    }
};