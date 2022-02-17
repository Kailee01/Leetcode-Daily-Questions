#define vi vector<int>
class Solution {
public:
    vector<vector<int>>ans;
void allPerm(int i,int n,vector<int>&arr,vi &temp){
if(i>=n){ans.push_back(temp);return;}

for(int j=0;j<n;j++){ 
    if(temp[j]==-11){
      temp[j]=arr[i];
      allPerm(i+1,n,arr,temp);
      temp[j]=-11;
    }
}
}

    vector<vector<int>> permute(vector<int>& nums) {
        vector<int>temp(nums.size(),-11);
         allPerm(0,nums.size(),nums,temp);
        return ans;
    }
};