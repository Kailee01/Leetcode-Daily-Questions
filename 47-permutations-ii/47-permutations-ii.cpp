#define vi vector<int>
class Solution {
public:
    
        vector<vi>ans,ans1;
void allPerm(int i,int n,vi&arr,vi &temp){
if(i>=n){ans.push_back(temp);return;}

for(int j=0;j<n;j++){ 
    if(temp[j]==-11){
      temp[j]=arr[i];
      allPerm(i+1,n,arr,temp);
      temp[j]=-11;
    }
}
}
    
    
    
    vector<vector<int>> permuteUnique(vector<int>& nums) {
set<vector<int>>st;
vi temp(nums.size(),-11);
         allPerm(0,nums.size(),nums,temp);
        for(auto x:ans)st.insert(x);
        for(auto x:st)ans1.push_back(x);
        return ans1;
    }
};