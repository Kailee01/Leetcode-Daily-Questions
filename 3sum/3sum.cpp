class Solution {
public:
    
    vector<vector<int>> threeSum(vector<int>& nums){  
        sort(nums.begin(),nums.end());
        set<vector<int>>ans;
vector<vector<int>> final_vector;
int n=nums.size();
if(n<3) return final_vector;
        for(int i=0;i<n-2;i++){
            int a_pointer=i+1;
            int b_pointer=n-1;
            while(a_pointer<b_pointer){
                if(nums[a_pointer]+nums[b_pointer]==-nums[i]){
             ans.insert({nums[i],nums[a_pointer++],nums[b_pointer--]});}
                else if(nums[a_pointer]+nums[b_pointer]>-nums[i])b_pointer--;
                else a_pointer++;
            }
        }
for(auto x:ans)final_vector.push_back(x);

    return final_vector;    
    }
};