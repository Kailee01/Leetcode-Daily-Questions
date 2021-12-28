class Solution {
public:
    int ans=0;
    void printArr(vector<int> &arr){
        for(int i:arr){
            cout<<i<<" ";
        }
            cout<<endl;
        return ;
    }
    
    void allSubset(int i,vector<int> &nums,int cur_or,vector<int> &subset, int max_or){
        if(i==nums.size()){
            // printArr(subset);
            for(int i=0;i<subset.size();i++){
                cur_or|=subset[i];
            }
            ans+=(cur_or==max_or);
            cur_or=0;
            return ;
        }
        subset.push_back(nums[i]);
        allSubset(i+1,nums,cur_or,subset,max_or); // take 
        subset.pop_back();
        
        allSubset(i+1,nums,cur_or,subset,max_or);// not take
    }
    
    
    
    int countMaxOrSubsets(vector<int>& nums) {
        int max_or=0;
        for(int i:nums)max_or|=i;
        vector<int>subset;
        allSubset(0,nums,0,subset,max_or);
        return ans;
    }
};