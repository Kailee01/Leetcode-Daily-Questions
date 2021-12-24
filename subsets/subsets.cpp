class Solution {
public:
    vector<vector<int>>ans;
    vector<int>sln;
    void cnt(vector<int>& nums,int i){
        if(i>=nums.size()){
            ans.push_back(sln);
            return ;}
        
        sln.push_back(nums[i]);
        cnt(nums,i+1);
        sln.pop_back();
        cnt(nums,i+1);
    
        
    }
    
    
    // 1010100
                 
    bool isSet(int number,int bit){
        return ((1<<bit)&number)>0;
    }
    
    
    
    vector<vector<int>> subsets(vector<int>& nums) {

        
        vector<vector<int>>ans1;
        int n=nums.size();
        for(int i=0;i<(1<<n);i++){
            vector<int>curSubset;
            for(int idx=0;idx<n;idx++){
                if(isSet(i,idx)){
                    curSubset.push_back(nums[idx]);
                }
            }
            ans1.push_back(curSubset);
            }
            return ans1;
        
        cnt(nums,0);
         return ans;
    }
};