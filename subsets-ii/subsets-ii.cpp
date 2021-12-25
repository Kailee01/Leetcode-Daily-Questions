class Solution {
public:
    
    // sol1.
    set<vector<int>>ans;
    vector<vector<int>>ans2;
    vector<int>sln;
    void cnt(vector<int>& nums,int i){
        if(i>=nums.size()){ans.insert(sln);return ;}
        sln.push_back(nums[i]);
        cnt(nums,i+1);
        sln.pop_back();
        cnt(nums,i+1);
    }
    

    
    // sol2.
        bool isSet(int number,int bit){
        return ((1<<bit)&number)>0;
    }
    
    vector<vector<int>> subsetBit(vector<int> &nums){
        int n=nums.size();
        for(int i=0;i<(1<<n);i++){
            vector<int>curSubset;
            for(int idx=0;idx<n;idx++){
                if(isSet(i,idx)){
                    curSubset.push_back(nums[idx]);
                }
            }
            ans.insert(curSubset);
            }
        
        vector<vector<int>>ans11;
        for(auto x:ans)ans11.push_back(x);
         return ans11;
    }
    
    

    
    
    
// sol3.

      void subsetDup(int i,vector<int> &nums,vector<int> &curSubset,bool isPrev){
        if(i==nums.size()){
            ans2.push_back(curSubset);
            return ;
        }
        subsetDup(i+1,nums,curSubset,false);
        if(i>0&&nums[i]==nums[i-1]&&(!isPrev)){
            cout<<"same"<<i<<endl;
            return ;
            
            // if you skip the x then all the x shold be skipped.
        }
        
        curSubset.push_back(nums[i]);
        subsetDup(i+1,nums,curSubset,true);
        curSubset.pop_back();
    }
    
  
    
    
    
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int>curSubset;
        subsetDup(0,nums,curSubset,false);        
        return ans2;
        return subsetBit(nums);
        cnt(nums,0); // This Will Also work simply ..
        vector<vector<int>>ans11;
        for(auto x:ans)ans11.push_back(x);
         return ans11;
        
        
        
        
    }
};