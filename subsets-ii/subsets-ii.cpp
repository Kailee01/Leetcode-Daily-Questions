class Solution {
public:
    set<vector<int>>ans;
    vector<int>sln;
    void cnt(vector<int>& nums,int i){
        if(i>=nums.size()){ans.insert(sln);return ;}
        
        
        sln.push_back(nums[i]);
        cnt(nums,i+1);
        sln.pop_back();
        cnt(nums,i+1);
    
        
    }

    
    
        bool isSet(int number,int bit){
        return ((1<<bit)&number)>0;
    }
    
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {

        
        
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
            // return ans1;
        sort(nums.begin(),nums.end());
        
        cnt(nums,0);
        
        vector<vector<int>>ans11;
        for(auto x:ans)ans11.push_back(x);
         return ans11;
    }
};